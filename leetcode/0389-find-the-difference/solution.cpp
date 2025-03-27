class Solution {
public:
    char findTheDifference(string s, string t) {
      for(char ch: t){
        int countT= count(t.begin(),t.end(),ch);
        int countS=count(s.begin(),s.end(),ch);
        if(countT>countS){
            return ch;
        }
      }
       
       return '0';
}
};
