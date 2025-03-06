class Solution:
    def isPalindrome(self, s: str) -> bool:
        import re
        a=re.sub(r'[ _""\\;+:{!@#$}%^&*([)--,''.?/]','',s)
        a=a.replace(']','')
        a=a.replace("'",'')
        a=a.replace("`",'')
        a=a.replace("`",'')
        return a.lower()==a[::-1].lower()

# OR

class Solution:
    def isPalindrome(self, s: str) -> bool:
        symbols = 'abcdefghijklmnopqrstuvwxyz1234567890'
        new_s = ''
        for i in s.lower():
            if i in symbols:
                new_s += i
        return new_s[::-1] == new_s
