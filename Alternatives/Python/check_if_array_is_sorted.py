class Solution:
    def check(self, nums: List[int]) -> bool:
        a=sorted(nums)
        l=len(nums)
        for i in range(l):
            k=nums[i:]+nums[:i]
            if k==a:
                return True
        return False
