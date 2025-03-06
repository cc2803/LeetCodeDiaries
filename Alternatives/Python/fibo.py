class Solution:
    def fib(self, n: int) -> int:
        if n in [0,1]:
            return n
        elif n<0:
            return -1
        else:
            return self.fib(n-1)+self.fib(n-2)
        
