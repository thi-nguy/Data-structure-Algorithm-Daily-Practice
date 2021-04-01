#include <stdio.h>
#include <stdlib.h>

int *sortedSquares(int *nums, int numsSize, int *returnSize)
{
	int i;
	int j;
    int *ret;

    *returnSize = numsSize;
	if (!(ret = (int *)malloc(sizeof(int) * numsSize)))
		return (0);
	ret += numsSize - 1;
    i = 0;
	j = numsSize - 1;
	while (i < j)
	{
		if(nums[i] * nums[i] < nums[j] * nums[j])
		{
			*ret = nums[j] * nums[j];
			j--;
		}
		else
		{
			*ret = nums[i] * nums[i];
			i++;
		}
		ret--;
	}
	*ret = nums[i] * nums[i];
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

int	main(void)
{
	int *res;
	int returnSize;

	res = NULL;
	int nums[5] = {-4, -1, 0, 3, 10};
	print_array(nums, 5);
	res = sortedSquares(nums, 5, &returnSize);
	print_array(res, returnSize);
	free(res);
	res = NULL;

	int nums1[5] = {-11, -2, 1, 3, 10};
	print_array(nums1, 5);
	res = sortedSquares(nums1, 5, &returnSize);
	print_array(res, returnSize);
	free(res);
	res = NULL;

	int nums2[6] = {-11, -3, -2, 1, 3, 10};
	print_array(nums2, 6);
	res = sortedSquares(nums2, 6, &returnSize);
	print_array(res, returnSize);
	free(res);
	res = NULL;
}

