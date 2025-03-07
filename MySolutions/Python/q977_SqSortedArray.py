class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        
        r = [i*i for i in nums]
        return sorted(r)

#Beats 96%, beginner-friendly method