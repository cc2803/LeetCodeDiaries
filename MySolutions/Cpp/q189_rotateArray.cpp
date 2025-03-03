//time wise - beats 100%

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l = nums.size();
        k = k % l;
        
        // Perform rotation in-place
        vector<int> temp(nums.begin() + l - k, nums.end());
        nums.erase(nums.begin() + l - k, nums.end());
        nums.insert(nums.begin(), temp.begin(), temp.end());
    }
};