class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        a=set(nums)
        b={}
        for i in a:
            b[i]=nums.count(i)
        k=next((y for x,y in b.items() if x==0),0)
        l=next((y for x,y in b.items() if x==1),0)
        m=next((y for x,y in b.items() if x==2),0)
        nums[0:k]=[0]*k
        nums[k:l+k]=[1]*l
        nums[l+k:l+k+m]=[2]*m
