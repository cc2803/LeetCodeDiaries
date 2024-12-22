#Brute force, beginner friendly method involving string-int interconversions

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
