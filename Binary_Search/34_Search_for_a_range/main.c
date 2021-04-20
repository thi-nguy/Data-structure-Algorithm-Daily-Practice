#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int  find_first_pos(int *nums, int numsSize, int target)
{
    int left;
    int right;
    int mid;
    int index;

    index = numsSize;
    left = 0;
    right = numsSize - 1;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (nums[mid] >= target)
        {
            index = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return (index);
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize)
{
    int *ret;

    *returnSize = 2;
    ret = (int *)malloc(sizeof(int) * *returnSize);

    // ! Find first element that is >= target
    // ! How about when there is no target found?
    ret[0] = find_first_pos(nums, numsSize, target);

    // ! Find first element that is >= target + 1
    ret[1] = find_first_pos(nums, numsSize, target + 1) - 1;
    if (ret[0] <= ret[1])
        return (ret);
    else
    {
        ret[0] = -1;
        ret[1] = -1;
        return (ret);
    }
}

void    print_range(int *nums)
{
    printf("%i, ", nums[0]);
    printf("%i\n", nums[1]);
}

int main(void)
{
    int *ret = NULL;
    int returnSize;
    
    returnSize = 2;

    int nums[6] = {5, 7, 7, 8, 8, 10};
    ret = searchRange(nums, 6, 9, &returnSize);
    printf("3, 4\n");
    print_range(ret);
    free(ret);
    ret = NULL;

    int nums1[6] = {8, 8, 8, 8, 8, 10};
    ret = searchRange(nums1, 6, 8, &returnSize);
    printf("0, 4\n");
    print_range(ret);
    free(ret);
    ret = NULL;

    int nums2[6] = {8, 8, 8, 8, 8, 10};
    ret = searchRange(nums2, 6, 7, &returnSize);
    printf("-1, -1\n");
    print_range(ret);
    free(ret);
    ret = NULL;

    int nums3[0] = {};
    ret = searchRange(nums3, 0, 7, &returnSize);
    printf("-1, -1\n");
    print_range(ret);
    free(ret);
    ret = NULL;

    int nums4[1] = {1};
    ret = searchRange(nums4, 1, 1, &returnSize);
    printf("0, 0\n");
    print_range(ret);
    free(ret);
    ret = NULL;

    int nums5[3] = {1, 2, 3};
    ret = searchRange(nums5, 3, 2, &returnSize);
    printf("1, 1\n");
    print_range(ret);
    free(ret);
    ret = NULL;

    int nums6[2] = {2, 2};
    ret = searchRange(nums6, 2, 3, &returnSize);
    printf("-1, -1\n");
    print_range(ret);
    free(ret);
    ret = NULL;
    return (0);
}