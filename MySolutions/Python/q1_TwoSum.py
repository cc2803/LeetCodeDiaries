#TwoSum - Naive Approach

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        indices=[]
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if target-nums[i]==nums[j]:
                        indices.extend([i,j])
        
        return indices
