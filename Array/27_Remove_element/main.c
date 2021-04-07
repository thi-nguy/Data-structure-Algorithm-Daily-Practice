#include <stdio.h>

int removeElement(int* nums, int numsSize, int val)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (i < numsSize)
    {
        if (nums[i] != val)
        {
            nums[j] = nums[i];
            j++;
        }
        i++;
    }
    return (j);
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

int     main(void)
{
    int nums[4] = {3, 2, 2, 3};

    int ret;
    ret = removeElement(nums, 4, 3);
    printf("2, 2\n");
    print_array(nums, ret);

    int nums1[10] = {2, 0, 1, 2, 2, 2, 3, 0, 4, 2};
    ret = removeElement(nums1, 10, 2);
    printf("0, 1, 3, 0, 4\n");
    print_array(nums1, ret);
}