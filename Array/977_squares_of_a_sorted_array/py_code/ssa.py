def sortedSquares(nums):
	i = 0
	j = len(nums) - 1
	k = len(nums) - 1
	ret = [0 for n in nums]
	while (i < j):
		if (nums[i] * nums[i] < nums[j] * nums[j]):
			ret[k] = nums[j] * nums[j]
			j -= 1
		else:
			ret[k] = nums[i] * nums[i]
			i += 1
		k -= 1
	ret[k] = nums[i] * nums[i]
	return (ret)

	# Second solution: better runtime
	# return (sorted([n * n for n in nums]))