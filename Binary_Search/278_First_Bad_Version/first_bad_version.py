# The isBadVersion API is already defined for you.
# @param version, an integer
# @return an integer
# def isBadVersion(version):
def firstBadVersion(self, n):
    """
    :type n: int
    :rtype: int
    """
    left = 0
    right = n
    while left < right:
        mid = left + (right - left) // 2
        if (isBadVersion(mid) == 0):
            left = mid + 1
        else:
            right = mid
    if (isBadVersion(left) == 1):
        return (left)
    return (-1)