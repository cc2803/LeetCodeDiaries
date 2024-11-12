class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x==0:
            return True
        elif x<0 or x%10==0:
            return False
        else:
            counter=0
            n1=x; n2=x
            while n1>0:
                counter+=1
                n1//=10
            res=0
            for i in range(counter):
                res=res*10+n2%10
                n2//=10
            return x==res
