class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for( const string& word: words){
            if(isPalindrome(word)){
                return word;
            }
        }
            return "";
        }
       private:
       bool isPalindrome(const string&s){
            int first=0;
            int second=s.size()-1;
            while(first<second){
                if(s[first]!=s[second]){
                    return false;
                }
                first++;
                second--;
            }
            
            return true;
        }
};
