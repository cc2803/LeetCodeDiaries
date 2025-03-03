class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        l=len(nums)
        k = k%l

        nums[:] = nums[l-k:]+nums[:l-k]  #rotate array right by k places

#Beats 100% time wise and 98.27% memory wise