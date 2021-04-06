#include <stdlib.h>
#include <stdio.h>

void	merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
	int i;
	int j;
	int k;

	if (nums1Size <= 0 || nums2Size <= 0)
		return ;
	i = m - 1;
	j = n - 1;
	k = m + n - 1;
	while (j >= 0 && i >= 0)
	{
		if (nums1[i] > nums2[j])
			nums1[k--] = nums1[i--];
		else
			nums1[k--] = nums2[j--];
	}
	while (i >= 0)
		nums1[k--] = nums1[i--];
	while (j >= 0)
		nums1[k--] = nums2[j--];
}

void	print_array(int *nums, int numsSize)
{
	int i = 0;

	while (i < numsSize - 1)
	{
		printf("%i, ", nums[i]);
		i++;
	}
	printf("%i\n", nums[i]);
}

	int	main(void)
	{
		int nums1[6] = {1, 2, 3, 0, 0, 0};
		int nums2[3] = {2, 5, 6};
		int nums3[6] = {3, 4, 7, 0, 0, 0};

		printf("1, 2, 2, 3, 5, 6\n");
		merge(nums1, 6, 3, nums2, 3, 3);
		print_array(nums1, 6);

		printf("2, 3, 4, 5, 6, 7\n");
		merge(nums3, 6, 3, nums2, 3, 3);
		print_array(nums3, 6);
		return (0);
	}
