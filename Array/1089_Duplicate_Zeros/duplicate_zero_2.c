// ! Solution 2: Short Runtime, Large memory used.
#include "dup_zero.h"

void    duplicateZeros(int *arr, int arrSize)
{
    int *tmp;
    int i;
    int index;

    // Copy array into tmp
    if (!(tmp = (int *)malloc(sizeof(int) * arrSize)))
        return ;
    i = -1;
    while (++i < arrSize)
        tmp[i] = arr[i];

    // Compare tmp and array.
    index = 0;
    i = 0;
    while (index < arrSize)
    {
        arr[index] = tmp[i];
        if (tmp[i] == 0)
        {
            if (index < arrSize - 1)
                arr[index + 1] = 0;
            index++;
        }
        index++;
        i++;
    }

    // Free tmp to avoid memory leaks.
    free(tmp);
    tmp = NULL;
}