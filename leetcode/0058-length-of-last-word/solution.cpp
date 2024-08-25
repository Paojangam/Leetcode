class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
        int n=s.size()-1;

        for(int i=n;i>=0;i--){
            if(s[i]!=' '){
               length++;
            }else if(s[i]==' '&& length>0){
             
           break;
            }
        }
       return length;
    }
};
