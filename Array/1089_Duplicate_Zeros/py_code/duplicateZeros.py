def duplicateZeros(arr):
    """
    Do not return anything, modify arr in-place instead.
    """
    tmp = arr.copy()
    index = 0
    i = 0
    while(index < len(arr)):
        arr[index] = tmp[i]
        if (tmp[i] == 0):
            if (index < len(arr) - 1):
                arr[index + 1] = 0
            index += 1
        index += 1
        i += 1
    return (arr) # ! return here to work with test_duplicateZeros.py