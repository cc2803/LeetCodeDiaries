class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        mega = nums1+nums2
        mega.sort()
        mlen=len(mega)

        if len(mega)%2!=0:
            median=mega[mlen//2]
        else:
            median=(mega[(mlen//2)]+mega[mlen//2 -1])/2.0
    
        return median


#Very basic/brute force method, however beats 100%
