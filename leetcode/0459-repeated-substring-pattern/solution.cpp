class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        
        int n= s.length();
        for(int i=1;i<=n/2;i++){
          string Substring=s.substr(0,i);
            int times=n/i;
            string result;
            for(int j=0;j<times;j++){
                result+=Substring;
            }
            if(result==s){
                return true;
            }
        }
        return false;
    }
};
