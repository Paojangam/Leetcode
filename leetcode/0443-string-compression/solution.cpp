class Solution {
public:
    int compress(vector<char>& chars) {
      int n=chars.size();
      int read=0;
      int write=0;
      while(read<n){
            char curchar=chars[read];
            int count=0;
            while(read<n && chars[read]==curchar){
                read++;
                count++;
            }
            chars[write++]=curchar;
            if(count>1){
                string countstr= to_string(count);
                for(char c: countstr){
                    chars[write++]=c;
                }
            }
      }
      return write;
    }
};
