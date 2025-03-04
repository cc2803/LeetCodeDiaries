//beats 100% time wise

class Solution {
    public:
        void swapnums(int& a, int&b){
            if(&a!=&b){
            a=a^b;
            b=a^b;
            a=a^b;
        }
        }
        void moveZeroes(vector<int>& nums) {
            int i=0;
            int l=nums.size();
            
            
            for(int j=0;j<l;j++){
                if(nums[j]!=0){
                    swapnums(nums[j],nums[i]);
                    i++;
                }
            }
        }
    };