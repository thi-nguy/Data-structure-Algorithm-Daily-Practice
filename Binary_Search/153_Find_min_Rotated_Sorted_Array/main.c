#include <stdio.h>

int findMin(int* nums, int numsSize)
{
    int left;
    int mid;
    int right;

    left = 0;
    right = numsSize - 1;
    
    while (left < right)
    {
        mid = left + (right - left) / 2;
          /* minimum is on left side */
        if (nums[mid] < nums[right])
            right = mid;
        /* minimum is on right side */
        else
            left = mid + 1;
    }
    return (nums[left]);
}

int main(void)
{
    int ret;
    int nums[7] = {4, 5, 6, 7, 0, 1, 2};
    ret = findMin(nums, 7);
    printf("0\n");
    printf("%i\n", ret);

    int nums1[1] = {4};
    ret = findMin(nums1, 1);
    printf("4\n");
    printf("%i\n", ret);

    int nums2[7] = {0, 1, 2, 4, 5, 6, 7};
    ret = findMin(nums2, 7);
    printf("0\n");
    printf("%i\n", ret);

    int nums3[7] = {7, 6, 5, 4, 2, 1, 0};
    ret = findMin(nums3, 7);
    printf("0\n");
    printf("%i\n", ret);

    int nums4[2] = {-1, 0};
    ret = findMin(nums4, 2);
    printf("-1\n");
    printf("%i\n", ret);

    int nums5[3] = {3, 1, 2};
    ret = findMin(nums5, 3);
    printf("1\n");
    printf("%i\n", ret);


    return (0);
}