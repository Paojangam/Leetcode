class Solution {
public:
    string reversePrefix(string word, char ch) {
        string result;
      int index=-1;
      for(int i=0;i<word.length();i++){
        if(word[i]==ch){
            index=i;
            break;
        }
      }
      if(index==-1) return word;
      for(int i=index;i>=0;i--){
        result+=word[i];
      }
      for(int i=index+1;i<word.length();i++){
        result+=word[i];
      }
      return result;
    }
};

