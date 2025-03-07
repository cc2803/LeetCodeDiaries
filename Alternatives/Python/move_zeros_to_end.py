class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        temp=[a for a in nums if a!=0]
        l=len(nums)-len(temp)
        nums[:len(temp)]=temp
        nums[len(temp):]=[0]*l
