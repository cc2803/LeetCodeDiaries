class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
            vector<int> r(nums.size());
            int i=0,j=nums.size()-1;
            int index=nums.size()-1;
    
            while(i<=j){
                int l_square = nums[i]*nums[i];
                int r_square = nums[j]*nums[j];
                if(l_square>r_square){
                    r[index]=l_square;
                    i++;
                }
                else{
                    r[index]=r_square;
                    j--;
                }
                index--;
            }
            return r;
        }
    };

// classic 2 pointer method, beats 100%