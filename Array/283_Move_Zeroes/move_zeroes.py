def moveZeroes(nums) -> None:
    """
    Do not return anything, modify nums in-place instead.
    """
    i = 0
    j = 0
    numsSize = len(nums)
    while (j < numsSize):
        if (nums[j] != 0):
            nums[i] = nums[j]
            i += 1
        j += 1
    while (i < j):
        nums[i] = 0
        i += 1

nums = [0, 1, 0, 3, 12]
moveZeroes(nums)
print(nums)
