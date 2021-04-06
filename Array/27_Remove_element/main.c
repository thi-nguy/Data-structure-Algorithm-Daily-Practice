#include <stdio.h>

int removeElement(int* nums, int numsSize, int val)
{
    int i;
    int j;
    int count;
    
    i = 0;
    count = 0;
    while (i < numsSize)
    {
        if (nums[i] == val)
        {
            j = i;
            while (i < numsSize - 1)
            {
                if (nums[i + 1] != val)
                {
                    nums[j] = nums[i + 1];
                    count++;
                    j++;
                }
                i++;
            }
        }
        else
            count++;
        i++;
    }
    return (count);
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