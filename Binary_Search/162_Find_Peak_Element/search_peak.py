def findPeakElement(nums):
    left = 0
    right = len(nums) - 1
    while (left < right):
        mid = (left + right) // 2
        if (nums[mid] < nums[mid + 1]):
            left = mid + 1
        elif (nums[mid] > nums[mid + 1]):
            right = mid
        else:
            return (mid)
    return (left)