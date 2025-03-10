class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        a=[]
        d=0
        for i in nums:
            if i ==0:
                a.append(d)
                d=0
            else:
                d+=1
        a.append(d)
        return max(a)
