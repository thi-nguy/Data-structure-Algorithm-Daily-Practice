#include <stdlib.h>
#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* A, int ASize, int* returnSize)
{
    int *ret;
    int i;
    int start;
    int end;

    *returnSize = ASize;
    if (!(ret = (int *)malloc(sizeof(int) * ASize)))
        return (NULL);
    i = 0;
    start = 0;
    end = ASize - 1;
    while (i < ASize)
    {
        if (A[i] % 2 == 0)
        {
            ret[start] = A[i];
            start++;
        }
        else   
        {
            ret[end] = A[i];
            end--;
        }
        i++;
    }
    return (ret);
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

    int nums[4] = {3, 1, 2, 4};
    ret = sortArrayByParity(nums, 4, &returnSize);
    print_array(nums, 4);
    print_array(ret, 4);
    free(ret);
    ret = NULL;

    int nums1[9] = {0, 35, 8, 2, 88, 3, 1, 2, 4};
    ret = sortArrayByParity(nums1, 9, &returnSize);
    print_array(nums1, 9);
    print_array(ret, 9);
    free(ret);
    ret = NULL;

    return (0);
}