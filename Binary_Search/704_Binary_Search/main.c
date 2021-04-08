#include <stdio.h>

int     search(int *nums, int numsSize, int target)
{
    int mid;
    int range;

    if (numsSize < 1)
        return (-1);
    mid = (numsSize - 1) / 2;
    range = mid / 2;
    while (range > 0)
    {
        if (nums[mid] > target)
            mid = mid - range;
        else if (nums[mid] < target)
            mid = mid + range;
        else if (nums[mid] == target)
            return (mid);
        range /= 2;
    }
    if (mid > 0)
    {
        if (nums[mid + 1] == target)
            return (mid + 1);
        else if (nums[mid - 1] == target)
            return (mid - 1);
    }
    else if (nums[mid] == target)
        return (mid);
    else if (nums[mid + 1] == target)
        return (mid + 1);
    return (-1);
}

int     main(void)
{
    int nums[5] = {-1, 0, 1, 5, 7};
    int target = 3;
    int ret;

    ret = search(nums, 5, target);
    printf("-1\n");
    printf("%i\n", ret);

    int nums1[4] = {-1, 2, 3, 5};
    ret = search(nums1, 4, target);
    printf("2\n");
    printf("%i\n", ret);

    int nums2[6] = {-1, 0, 3, 5, 9, 12};
    ret = search(nums2, 6, 9);
    printf("4\n");
    printf("%i\n", ret);

    int nums3[1] = {-5};
    ret = search(nums3, 1, 0);
    printf("-1\n");
    printf("%i\n", ret);

    int nums4[1] = {-5};
    ret = search(nums4, 1, -5);
    printf("0\n");
    printf("%i\n", ret);

    int nums5[0] = {};
    ret = search(nums5, 0, -5);
    printf("-1\n");
    printf("%i\n", ret);

    int nums6[2] = {2, 5};
    ret = search(nums6, 2, 5);
    printf("1\n");
    printf("%i\n", ret);

    return (0);
}