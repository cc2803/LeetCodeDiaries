class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        d={}
        for i in set(nums):
            d[i]=nums.count(i)
        k=next((m for m,n in d.items() if n==1),None)
        return k
        
