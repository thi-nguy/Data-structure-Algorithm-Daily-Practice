#include <stdio.h>

int findPeakElement(int* nums, int numsSize)
{
    // int left;
    // int right;
    // int mid;

    // left = 0;
    // right = numsSize - 1;
    // if (numsSize <= 2)
    // {
    //     if (numsSize == 1)
    //         return (0);
    //     if (nums[0] < nums[1])
    //         return (1);
    //     else
    //         return (0);
    // }
    // while (left < right)
    // {
    //     mid = left + (right - left) / 2;
    //     if (mid > 0 && nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1])
    //         return (mid);
    //     if (nums[mid] < nums[mid + 1])
    //         left = mid + 1;
    //     else
    //         right = mid - 1;
    // }
    // if (left == 0 && nums[left] > nums[left + 1])
    //     return (left);
    // if (left == numsSize - 1 && nums[left] > nums[left - 1])
    //     return (left);
    // if (left != numsSize - 1 && nums[left] > nums[left + 1] && nums[left] > nums[left - 1])
    //     return (left);
    // return (-1);
    int left;
    int right;
    int mid;
    
    left = 0;
    right = numsSize - 1;
    while (left < right)
    {
        mid = left + (right - left) / 2;
        if (nums[mid] < nums[mid + 1]) // why we don't need to compare 2 neighbours? Why we compare just one neighbour?
            left = mid + 1;
        else if(nums[mid] > nums[mid + 1])
            right = mid;
        else
            return (mid);
    }
    return (left);
}

int main(void)
{
    int ret;

    int nums[15] = {2, 8, 4, 7, 3, 6, 10, 14, 8, 11, 6, 4, 9, 17, 7};
    ret = findPeakElement(nums, 15);
    printf("1, 3, 7, 9, 13\n");
    printf("%i\n", ret);

    int nums1[7] = {1, 2, 1, 3, 5, 6, 4};
    ret = findPeakElement(nums1, 7);
    printf("1 or 5\n");
    printf("%i\n", ret);

    int nums2[4] = {1, 2, 3, 1};
    ret = findPeakElement(nums2, 4);
    printf("2\n");
    printf("%i\n", ret);

    int nums3[3] = {1, 3, 2};
    ret = findPeakElement(nums3, 3);
    printf("1\n");
    printf("%i\n", ret);
    
    int nums4[3] = {3, 1, 2};
    ret = findPeakElement(nums4, 3);
    printf("0 or 2\n");
    printf("%i\n", ret);

    int nums5[3] = {1, 2, 3};
    ret = findPeakElement(nums5, 3);
    printf("2\n");
    printf("%i\n", ret);

    int nums6[3] = {3, 2, 1};
    ret = findPeakElement(nums6, 3);
    printf("0 or 1\n");
    printf("%i\n", ret);

    int nums7[5] = {5, 4, 3, 2, 1};
    ret = findPeakElement(nums7, 5);
    printf("0\n");
    printf("%i\n", ret);

    return (0);
}