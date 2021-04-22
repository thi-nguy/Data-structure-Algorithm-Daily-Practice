def replaceElements(arr):
    arrSize = len(arr)
    ret = [-1] * arrSize
    i = arrSize - 1
    j = arrSize - 1
    ret[j] = -1
    while (j > 0):
        if (ret[j] < arr[i]):
            ret[j - 1] = arr[i]
        else:
            ret[j - 1] = ret[j]
        j -= 1
        i -= 1
    return(ret)

ret = replaceElements([1, 17, 3, 6, 8, 5 ,4])
print(ret)