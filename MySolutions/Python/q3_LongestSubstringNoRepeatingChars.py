class Solution(object):
    def lengthOfLongestSubstring(self, s):
        char_dict = {}
        left = 0
        max_len = 0

        for right in range(len(s)):
            if s[right] in char_dict and char_dict[s[right]] >= left:
                left = char_dict[s[right]] + 1
            char_dict[s[right]] = right
            max_len = max(max_len, right - left + 1)

        return max_len

'''
This method uses a dictionary to track letters used and its most recent index. The window is expanded from 0 to len(s), i.e,
towards right. The if statement checks if the encountered character is within the range of the window or not. If yes, set left
window index to the index right after where the character was last encountered. Else a new key:value pair is added.
Max_len returns maximum of current max_len and the window size, which is essentially our answer.
'''
