#include <stdio.h>

int search(int* nums, int numsSize, int target)
{
    int left;
    int right;
    int mid;

    left = 0;
    right = numsSize - 1;
    while (left <= right)
    {
        mid = left + (right - left) / 2; //Don't write mid = (left + right) / 2 to avoid the case that sum(left, right) bigger than maximum positive int(2^31 - 1)
        if (nums[mid] == target)
            return (mid);

        // if Left portion is sorted:
        if (nums[left] <= nums[mid])
        {
            if (target > nums[mid] || target < nums[left]) //tai sao phai co hai dieu kien nhu nay?
                left = mid + 1;
            else   
                right = mid - 1;
        }
        // if Right portion is sorted:
        else
        {
            if (target < nums[mid] || target > nums[right]) //tai sao phai co hai dieu kien nhu nay?
                right = mid - 1;
            else   
                left = mid + 1;
        }
    }
    return (-1);
}

int main(void)
{
    int i; 

    int nums[7] = {4, 5, 6, 7, 0, 1, 2};
    i = search(nums, 7, 0);
    printf("4\n");
    printf("%i\n", i);

    i = search(nums, 7, 3);
    printf("-1\n");
    printf("%i\n", i);

    int nums1[7] = {1, 2, 4, 5, 6, 7, 0};
    i = search(nums1, 7, 0);
    printf("6\n");
    printf("%i\n", i);

    i = search(nums1, 7, 3);
    printf("-1\n");
    printf("%i\n", i);

    int nums3[7] = {0, 1, 2, 4, 5, 6, 7};
    i = search(nums3, 7, 2);
    printf("2\n");
    printf("%i\n", i);

    i = search(nums3, 7, 3);
    printf("-1\n");
    printf("%i\n", i);

    int nums4[3] = {5, 1, 3};
    i = search(nums4, 3, 5);
    printf("0\n");
    printf("%i\n", i);

    int nums5[3] = {1, 3, 5};
    i = search(nums5, 3, 5);
    printf("2\n");
    printf("%i\n", i);

    return (0);
}