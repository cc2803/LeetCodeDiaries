from typing import List

class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        sorted_nums = []

        for i in nums:
            num = i*i
            sorted_nums.append(num)
            
        return sorted(sorted_nums)

