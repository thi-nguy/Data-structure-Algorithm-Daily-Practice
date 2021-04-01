from typing import List

def findNumbers(nums: List[int]) -> int:
	result = 0
	for n in nums:
		count_digit = 0
		while (n / 10 >= 1): #! Different than C
			count_digit += 1
			n /= 10
		count_digit += 1
		if (count_digit % 2 == 0):
			result += 1
	return (result) 