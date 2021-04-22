#include <stdio.h>

void moveZeroes(int* nums, int numsSize)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (j < numsSize)
    {
        if (nums[j] != 0)
        {
            nums[i] = nums[j];
            i++;
        }
        j++;
    }
    while (i < j)
    {
        nums[i] = 0;
        i++;
    }
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
    int nums[5] = {0, 1, 0, 3, 12};
    moveZeroes(nums, 5);
    printf("1, 3, 12, 0, 0\n");
    print_array(nums, 5);

    int nums1[1] = {0};
    moveZeroes(nums1, 1);
    printf("0\n");
    print_array(nums1, 1);

    return (0);
}