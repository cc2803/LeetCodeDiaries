#1 Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res={};
        for(int i=0;i<nums.size();i++){
            int num1=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==target-nums[i]){
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }
        return res;
    }
};
