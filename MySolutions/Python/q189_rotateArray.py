class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        l=len(nums)
        k = k%l

        nums[:] = nums[l-k:]+nums[:l-k]  #rotate array right by k places
        
        #nums[:] = nums[k:]+nums[:k]    rotate array left by k places
        