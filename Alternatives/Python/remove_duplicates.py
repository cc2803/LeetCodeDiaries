class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        a=[]
        count=0
        for i in nums:
            for j in a:
                if i!=j:
                    a.append(i)
                    count+=1
        return a,count
