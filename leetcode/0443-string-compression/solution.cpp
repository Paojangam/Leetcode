class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0;
       
        for(int i=0;i<chars.size();i++){
             int count=0;
             char currentChar = chars[i];
             while(i<chars.size() && chars[i]==currentChar){
                count++;
                i++;
           }
           i--;
           chars[index++]=currentChar;
           if(count>1){
            string cnt= to_string(count);
            for(char c:cnt){
            chars[index++]=c;
            }
           }
        }
        
       return index; 
    }
};
