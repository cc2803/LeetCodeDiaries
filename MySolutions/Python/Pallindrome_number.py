#Cheats/ beats 100% 

class Solution(object):
    def isPalindrome(self, x):
        return str(x)[::-1]==str(x)

#Arithmetic approach

class Solution(object):
    def isPalindrome(self, x):
        num=0
        copy=x
        rem=0
        if x<0: return False
        elif x==0: return True

        while x!=0:
            rem=x%10
            num=num*10+rem
            x=x//10 
            
        return num==copy


        
