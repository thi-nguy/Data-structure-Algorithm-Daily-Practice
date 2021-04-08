def search(nums, target):
    if (len(nums) <= 0):
        return (-1)
    left = 0
    right = len(nums) - 1
    while (left <= right):
        mid = (left + right) // 2 # ! floor division: 29//10 == 2
        if (nums[mid] > target):
            right = mid - 1
        elif (nums[mid] < target):
            left = mid + 1
        else:
            return (mid)
    return (-1)