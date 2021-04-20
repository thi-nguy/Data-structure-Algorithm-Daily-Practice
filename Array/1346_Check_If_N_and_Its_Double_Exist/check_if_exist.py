def checkIfExist(arr) -> bool:
    i = 0
    while (i < len(arr)):
        j = i + 1
        while (j < len(arr)):
            if (2 * arr[i] == arr[j] or 2 * arr[j] == arr[i]):
                return (True)
            j += 1
        i += 1
    return (False)