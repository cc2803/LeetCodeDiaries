# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        res = ListNode()
        carry = 0
        curr = res

        while l1 is not None or l2 is not None or carry != 0:
            s = carry
            if l1 is not None:
                s+=l1.val
                l1=l1.next
            if l2 is not None:
                s+=l2.val
                l2=l2.next
            carry = s//10
            curr.next = ListNode(s%10)
            curr = curr.next
        return res.next
