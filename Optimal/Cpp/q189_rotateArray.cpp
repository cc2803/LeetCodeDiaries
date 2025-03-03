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

//memory wise - beats 100%

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};