class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        r=[]
        for i in s:
            if i.isalnum():
                r.append(i.lower())
        
        return r==r[::-1]

#beats 98.7% timewise