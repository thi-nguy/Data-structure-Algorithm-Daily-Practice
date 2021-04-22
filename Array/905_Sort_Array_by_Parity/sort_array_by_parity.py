def sortArrayByParity(A):
    ASize = len(A)
    ret = [-1] * ASize
    i = 0
    start = 0
    end = ASize - 1
    while (i < ASize):
        if (A[i] % 2 == 0):
            ret[start] = A[i]
            start += 1
        else:   
            ret[end] = A[i]
            end -=1
        i += 1
    return (ret)