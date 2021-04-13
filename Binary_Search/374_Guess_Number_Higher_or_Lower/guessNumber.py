def guessNumber(n: int) -> int:
    left = 1
    right = n
    while (1):
        mid = (left + right) // 2
        ret = guess(mid)
        if (ret == 0):
            return(mid)
        if (ret == -1):
            right = mid - 1
        else:
            left = mid + 1
        