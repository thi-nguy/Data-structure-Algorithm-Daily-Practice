def validMountainArray(arr) -> bool:
    l = len(arr)
    if (l <= 2):
        return (False)
    if (arr[1] > arr[0]):
        i = 1
        while (i < l - 1):
            if (arr[i + 1] < arr[i]):
                j = i + 1
                while (j < l - 1):
                    if (arr[j + 1] >= arr[j]):
                        return (False)
                    j += 1
                return (True)
            elif (arr[i] == arr[i + 1]):
                return (False)
            i += 1
    return (False)