class Solution {
public:
    int myAtoi(string s) {
        int sign=1;
        long long int res=0;
        int n=s.size();
        int i=0;
        
        while(i<n && s[i]==' '){
            i++;
        }
        
        if(i<n && (s[i]=='-'||s[i]=='+')){
            if(s[i]=='-'){
                sign=-1;
            }
            i++;
        }
        
        while(i<n && '0'<=s[i] && s[i]<='9'){

             if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            
            res = res*10 + (s[i] - '0');
            i++;
        }
        res*=sign;
        
        if(res>INT_MAX) res=INT_MAX;
        else if(res<INT_MIN) res=INT_MIN;
        
        return res;
    }
};
