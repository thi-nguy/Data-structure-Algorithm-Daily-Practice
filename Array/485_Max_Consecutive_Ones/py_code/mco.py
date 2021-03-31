from typing import List

def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
    count = 0
    count_max = 0
    for i in nums:
        if i == 1:
            count += 1
        else:
            count_max = max(count, count_max)
            count = 0
    return (max(count, count_max))


            

        
