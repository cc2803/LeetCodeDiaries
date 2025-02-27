class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        k=-1        
        n = len(nums)
        for i in range(n-2,-1,-1):
            if nums[i]<nums[i+1]:
                k=i
                break
        
        if k==-1:
            nums.reverse()
            return
        
        l=-1
        for i in range(n-1,k,-1):
            if nums[i]>nums[k]:
                l=i
                break
        
        nums[k],nums[l]=nums[l],nums[k]

        nums[k+1:] = reversed(nums[k+1:])
