#include <stdio.h>

int findNumbers(int* nums, int numsSize)
{
	int count_digit;
	int result;
	int i;

	result = 0;
	i = 0;
	while (i < numsSize)
	{
		count_digit = 0;
		while((nums[i] / 10) > 0)
		{
			count_digit++;
			nums[i] /= 10;
		}
		count_digit++;
		if (count_digit % 2 == 0)
			result++;
		i++;
	}
	return (result);
}

int	main(void)
{
	int count;	

	int nums[2] = {1, 12};
	count = findNumbers(nums, 2);
	if (count == 1)
		printf("Pass\n");
	else
		printf("One count test: Not pass\n");

	int nums1[2] = {1, 1};
	count = findNumbers(nums1, 2);
	if (count == 0)
		printf("Pass\n");
	else
		printf("Zero count test: Not pass\n");

	int nums2[1] = {11};
	count = findNumbers(nums2, 1);
	if (count == 1)
		printf("Pass\n");
	else
		printf("One element test: Not pass\n");

	int nums3[5] = {2341, 11, 245, 11, 3};
	count = findNumbers(nums3, 5);
	if (count == 3)
		printf("Pass\n");
	else
		printf("Several elemnts test: Not pass\n");

	return (0);
}
