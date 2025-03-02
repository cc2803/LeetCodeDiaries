// Optimal time wise - beats 100%

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

//memory wise optimal solution - beats 100%


class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        // Check if the array is non-decreasing
        for (int i = 1; i < n; i++)
            if (nums[i - 1] > nums[i])
                count++;
        
        // Check if the last element is greater than the first element
        if (nums[n - 1] > nums[0])
            count++;
        
        // If the count of violations is less than or equal to 1, return true
        return count <= 1;
    }
};
