#A boolean function to check if an array is sorted or not

class Solution:
    def check(self, nums: List[int]) -> bool:
        k=-1
        l=len(nums)

        if l==0 or l==1:
            return True
        
        for i in range(1,l):
            if nums[i]<nums[i-1]:
                k=i
                break
        
        if k==-1: return True
        else:
            for j in range(k+1,l):
                if nums[j]<nums[j-1]:
                    return False
            
            if nums[l-1]<=nums[0]:
                return True
            else:
                return False
