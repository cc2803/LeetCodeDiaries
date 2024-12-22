#BEST (TIME WISE)

class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        left,right=1,x
             
        while left<=right:
            m=(left+right)//2   
            if m*m==x:
                return m
            elif m*m<x:
                left=m+1
            else:
                right=m-1
        return right
