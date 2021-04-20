class Solution:
    def search_first_pos(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums) - 1
        index = len(nums)
        while (left <= right):
            mid = left + (right - left) // 2
            if (nums[mid] >= target):
                index = mid
                right = mid - 1
            else:
                left = mid + 1
        return (index)
                
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        first = self.search_first_pos(nums, target)
        second = self.search_first_pos(nums, target + 1) - 1
        if (first <= second):
            return ([first, second])
        else:
            return ([-1, -1])