class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        i=0
        n=len(s)
        sign=1
        res=0

        while i<n and s[i]==" ":  #skipping whitespaces
            i+=1

        if i<n and (s[i]=='-' or s[i]=='+'):  #defining sign
            if s[i]=='-':
                sign = -1
            i+=1

        while i<n and '0'<=s[i]<='9':  #actual conversion
            res = res*10 + (ord(s[i])-ord('0'))
            i+=1
        
        res*=sign  #ensuring sign is included
        
        maxlim = 2**31 - 1
        minlim = -2**31

      #checking for out of bounds cases
        if res > maxlim:  
            return maxlim
        if res < minlim:
            return minlim
        
        return res        

