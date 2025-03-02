class Solution {
public:
    bool check(vector<int>& nums) {
        
        int k=-1;
        int l=nums.size();

        if(l==0||l==1){
            return true;
        }

        for(int i=1;i<l;i++){
            if(nums[i]<nums[i-1]){
                k=i;
                break;
            }
        }

        if(k==-1) return true;
        else{
        for(int j=k+1;j<l;j++){
            if(nums[j]<nums[j-1]){
                return false;
            }
        }
        if(nums[l-1]<=nums[0]) return true;
        else return false;
    }
    }
};
