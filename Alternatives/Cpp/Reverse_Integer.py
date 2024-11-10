class Solution:
    def reverse(self, x: int) -> int:
        if x>=0:
            n=str(x)
            n1=n[::-1]
            a=int(n1)
            # return a
        elif x<0:
            n=str(-x)
            n1=n[::-1]
            a=-int(n1)
            # return -a
        if a in range(-2**31,2**31-1):
            return a
        else:
            return 0
## the question asks for restricted output that is output ranging from [-2**31 to 2**31-1] and not the input
