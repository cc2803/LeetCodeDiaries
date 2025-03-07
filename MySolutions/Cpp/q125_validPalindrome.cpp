class Solution {
    public:
        bool isPalindrome(string s) {
            int left=0,right=s.size()-1;
    
            while(left<right){
    
                if(!isalnum(s[left])){
                    left++;
                }
                else if(!isalnum(s[right])){
                    right--;
                }
                else if(tolower(s[left])!=tolower(s[right])){
                    return false;
                }
                else{
                left++;
                right--;
            }
            }
            return true;
        }
    };

//beats 100% timewise, classic 2 pointer approach