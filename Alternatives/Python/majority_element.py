class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        a=set(nums)
        s={}
        for i in a:
            s[i]=nums.count(i)
        k=next((i for i,j in s.items() if j>len(nums)//2),0)
        return k
