def removeElement(nums, val):
    i = 0
    count = 0
    while (i < len(nums)):
        if (nums[i] == val):
            j = i
            while (i < len(nums) - 1):
                if (nums[i + 1] != val):
                    nums[j] = nums[i + 1]
                    count += 1
                    j += 1
                i += 1
        else:
            count += 1
        i +=1
    return (nums[0:count])