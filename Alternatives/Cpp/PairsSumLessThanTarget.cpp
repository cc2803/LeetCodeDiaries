class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int k=nums.size(),count=0;
        for(int i=0;i<k-1;i++){
            for(int j=i+1;j<k;j++){
                if(nums[i]+nums[j]<target){
                    count++;
                }
            }
        }
        return count;
    }
};
