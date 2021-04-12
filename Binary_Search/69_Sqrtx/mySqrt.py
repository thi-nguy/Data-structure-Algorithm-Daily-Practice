def mySqrt(x) -> int:
    if(x < 0):
        return (-1)
    if (x == 0):
        return (0)
    left = 0
    if (x < 6):
        right = x
    else:
        right = x // 2
    while (left <= right):
        mid = (right + left) // 2
        sqr = mid * mid
        if (sqr > x):
            right = mid - 1
        elif(sqr < x):
            left = mid + 1
        else:
            return (mid)
    if (sqr > x):
        return (mid - 1)
    else:
        return (mid)