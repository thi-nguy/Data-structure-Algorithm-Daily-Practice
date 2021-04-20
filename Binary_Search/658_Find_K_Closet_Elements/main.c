/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int search_upper_bound(int *arr, int arrSize, int x)
{
    int left;
    int right;
    int mid;
    int index;

    index = arrSize; //chsy tu phai sang
    left = 0;
    right = arrSize - 1;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] >= x)
        {
            index = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return (index);
}

int binary_search(int *arr, int arrSize, int x)
{
    int left;
    int right;
    int mid;

    left = 0;
    right = arrSize - 1;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return (mid);
        if (arr[mid] > x)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return(-1);
}

void quicksort(int *number, int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}

int* findClosestElements(int* arr, int arrSize, int k, int x, int* returnSize)
{
    int *ret;
    int up;
    int index;
    int i;
    int j;

    *returnSize = k;
    if (!(ret = (int *)malloc(sizeof(int) * k)))
        return (NULL);
    index = binary_search(arr, arrSize, x);
    if (index == -1)
    {
        up = search_upper_bound(arr, arrSize, x);
        j = up;
        i = -1;
        ret[0] = arr[up];
    }
    else
    {
        i = index - 1;
        j = index + 1;
        ret[0] = arr[index];
    }
    while (k - 1 > 0)
    {
        if (i >= 0 && j < arrSize)
        {
            if (((arr[i] - x) * (arr[i] - x)) <= ((arr[j] - x) * (arr[j] - x)))
            {
                ret[k - 1] = arr[i];
                i--;

            } 
            else
            {
                ret[k - 1] = arr[j];
                j++;
            }
        }
        else if (i < 0 || j >= arrSize)
        {
            if (j >= arrSize && i >= 0)
            {
                ret[k - 1] = arr[i];
                i--;
            }
            else if (i < 0 && j < arrSize)
            {
                ret[k - 1] = arr[j];
                j++;
            }
        }
        k--;
    }
    quicksort(ret, 0, k - 1);
    return (ret);
}


void	print_array(int *arr, int arrSize)
{
	int i;

	i = 0;
	while (i < arrSize - 1)
	{
		printf("%i, ", arr[i]);
		i++;
	}
	printf("%i\n", arr[i]);
}


int main(void)
{
    int *ret;
    int returnSize;
    int arrSize;
    int k;
    int x;

    int arr[5] = {1, 2, 3, 4, 5};
    arrSize = 5;
    k = 4;
    x = 3;
    returnSize = k;
    ret = findClosestElements(arr, arrSize, k, x, &returnSize);
    printf("1, 2, 3, 4\n");
    print_array(ret, k);
    free(ret);
    ret = NULL;

    int arr1[5] = {1, 2, 3, 4, 5};
    arrSize = 5;
    k = 4;
    x = -1;
    returnSize = k;
    ret = findClosestElements(arr1, arrSize, k, x, &returnSize);
    printf("1, 2, 3, 4\n");
    print_array(ret, k);
    free(ret);
    ret = NULL;

    return (0);
}