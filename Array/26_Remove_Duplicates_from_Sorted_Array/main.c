#include <stdio.h>

int removeDuplicates(int* nums, int numsSize)
{
    int i;
    int j;
    
    i = 1;
    j = 0;
    if (numsSize <= 0)
        return (0);
    while (i < numsSize)
    {
        if (nums[j] != nums[i])
        {
            nums[j + 1] = nums[i];
            j++;
        }
        i++;
    }
    return (j + 1);
}

void	print_array(int *nums, int numsSize)
{
	int i = 0;

    if (numsSize <= 0)
    {
        printf("\n");
        return ;
    }
    while (i < numsSize - 1)
	{
		printf("%i, ", nums[i]);
		i++;
	}
	printf("%i\n", nums[i]);
}

int     main(void)
{
    int nums[6] = {2, 2, 2, 3, 3, 3};

    int ret;
    ret = removeDuplicates(nums, 6);
    printf("2, 3\n");
    print_array(nums, ret);

    int nums1[11] = {0, 0, 1, 2, 2, 2, 3, 3, 4, 4, 5};
    ret = removeDuplicates(nums1, 11);
    printf("0, 1, 2, 3, 4, 5\n");
    print_array(nums1, ret);

    int nums2[] = {};
    ret = removeDuplicates(nums2, 0);
    printf("\n");
    print_array(nums2, ret);

}