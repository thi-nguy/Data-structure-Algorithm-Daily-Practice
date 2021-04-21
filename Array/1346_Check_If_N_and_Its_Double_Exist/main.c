#include <stdbool.h>
#include <stdio.h>

// O(N^2)
bool checkIfExist(int* arr, int arrSize)
{
    int i;
    int j;

    i = 0;
    while (i < arrSize)
    {
        j = i + 1;
        while (j < arrSize)
        {
            if (2 * arr[i] == arr[j] || 2 * arr[j] == arr[i])
                return (true);
            j++;
        }
        i++;
    }
    return (false);
}



int     main(void)
{
    bool ret;

    int arr[4] = {10, 2, 5, 3};
    ret = checkIfExist(arr, 4);
    printf("true\n");
    printf("%i\n", ret);

    int arr1[4] = {7, 1, 14, 11};
    ret = checkIfExist(arr1, 4);
    printf("true\n");
    printf("%i\n", ret);    

    int arr2[4] = {3, 1, 7, 11};
    ret = checkIfExist(arr2, 4);
    printf("false\n");
    printf("%i\n", ret);    

    return (0);
}