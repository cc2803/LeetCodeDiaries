#Ideal approach using 2 pointer technique

class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        l=len(s)
        front=0
        back=l-1

        while front<back:
            s[front],s[back]=s[back],s[front]
            front+=1
            back-=1