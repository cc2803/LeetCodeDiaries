class Solution {
    public:
        void reverseString(vector<char>& s) {
            
            int front=0,back=s.size()-1;
    
            while(front<back){
                swap(s[front],s[back]);
                front++;
                back--;
            }
        }
    };

//2 pointer approach, beats 100% timewise