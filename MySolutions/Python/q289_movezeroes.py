class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        r = [i for i in nums if i!=0]
        n_zeros = len(nums)-len(r)
        r.extend([0 for i in range(n_zeros)])
        nums[:] = r[:]
