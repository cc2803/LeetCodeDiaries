#BEST (Time wise)

class Solution(object):
    def lengthOfLongestSubstring(self, s):
        seen = {}
        l = 0
        length = 0
        for r in range(len(s)):
            char = s[r]
            if char in seen and seen[char] >= l:
                l = seen[char] + 1
            else:
                length = max(length, r - l + 1)
            seen[char] = r

        return length  

#BEST (Memory wise)
#Super brute force approach, terrible time wise, not advised unless used for educational purposes

class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        l=[]
        count=0
        start=0
        end=0
        for i in s:
            if i not in l:
                l.append(i)
                end+=1
            else:
                l.append(i)
                while(l[start]!=i):
                    l.remove(l[start])
                l.remove(l[start])
            count = max(count,len(l))
            print(l,count)
        return count

