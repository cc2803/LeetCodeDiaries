//Beats 100% timewise

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int l=nums.size();

        for(int j=1;j<l;j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};
