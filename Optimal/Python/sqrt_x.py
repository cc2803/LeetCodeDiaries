#BEST (memory wise)

class Solution(object):
    def mySqrt(self, x):
        current = 1
        while True:
            result = current * current
            if result > x:
                return current - 1
            elif result == x:
                return current
            current+=1

#BEST (time wise) - same as my solution, beats 100%

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
