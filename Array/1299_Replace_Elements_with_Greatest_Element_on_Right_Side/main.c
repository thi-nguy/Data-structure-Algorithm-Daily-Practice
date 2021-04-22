/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdlib.h>
#include <stdio.h>

int* replaceElements(int* arr, int arrSize, int* returnSize)
{
    int i;
    int j;
    int *ret;

    *returnSize = arrSize;
    if(!(ret = (int *)malloc(sizeof(int) * arrSize)))
        return (NULL);
    i = arrSize - 1;
    j = arrSize - 1;
    ret[j] = -1;
    while (j > 0)
    {
        if (ret[j] < arr[i])
            ret[j - 1] = arr[i];
        else
            ret[j - 1] = ret[j];
        j--;
        i--;
    }
    return(ret);
}

void	print_array(int *nums, int numsSize)
{
	int i;

	i = 0;
	while (i < numsSize - 1)
	{
		printf("%i, ", nums[i]);
		i++;
	}
	printf("%i\n", nums[i]);
}


int main(void)
{
    int *ret;
    int returnSize;
    returnSize = 0;

    int arr[6] = {17, 18, 5, 4, 6, 1};
    ret = replaceElements(arr, 6, &returnSize);
    printf("18, 6, 6, 6, 1, -1\n");
    print_array(ret, 6);
    free(ret);
    ret = NULL;

    return (0);
}