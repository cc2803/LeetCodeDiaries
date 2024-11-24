#Memory wise

class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        # Define 32-bit integer limits
        INT_MAX, INT_MIN = 2**31 - 1, -2**31
        
        # Determine if x is negative and work with its absolute value
        sign = -1 if x < 0 else 1
        x = abs(x)
        
        # Reverse the digits by converting to string and reversing
        reversed_x = int(str(x)[::-1]) * sign
        
        # Check if reversed_x is within the 32-bit signed integer range
        if reversed_x < INT_MIN or reversed_x > INT_MAX:
            return 0
        return reversed_x

  #Time wise 
class Solution(object):
    def reverse(self, x):
        y=abs(x)
        rnum = int(str(y)[::-1])
        if x<0:
            if rnum>2147483647:
                return 0
            else: 
                return -rnum
        else:
            if rnum<2147483647:
                return rnum
            else:
                return 0
