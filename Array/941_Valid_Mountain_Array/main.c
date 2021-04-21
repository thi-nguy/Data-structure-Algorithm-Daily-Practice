#include <stdbool.h>
#include <stdio.h>

bool validMountainArray(int* arr, int arrSize)
{
    int i;
    int j;

    if (arrSize <= 2)
        return (false);
    if (arr[1] > arr[0])
    {
        i = 1;
        while (i < arrSize - 1)
        {
            if (arr[i + 1] < arr[i])
            {
                j = i + 1;
                while (j < arrSize - 1)
                {
                    if (arr[j + 1] >= arr[j])
                        return (false);
                    j++;
                }
                return (true);
            }
            else if (arr[i] == arr[i + 1])
                return (false);
            i++;
        }
    }
    return (false);
}

int main(void)
{
    int ret;

    int nums[5] = {1, 2, 3, 2, 0};
    ret = validMountainArray(nums, 5);
    printf("True\n");
    printf("%i\n", ret);

    int nums2[2] = {2, 0};
    ret = validMountainArray(nums2, 2);
    printf("False\n");
    printf("%i\n", ret);

    int nums3[2] = {2};
    ret = validMountainArray(nums3, 1);
    printf("False\n");
    printf("%i\n", ret);

    int nums4[0] = {};
    ret = validMountainArray(nums4, 0);
    printf("False\n");
    printf("%i\n", ret);

    int nums5[5] = {0, 1, 2, 3, 4};
    ret = validMountainArray(nums5, 5);
    printf("False\n");
    printf("%i\n", ret);

    int nums6[5] = {1, 2, 3, 2, 2};
    ret = validMountainArray(nums6, 5);
    printf("False\n");
    printf("%i\n", ret);



    return (0);
}