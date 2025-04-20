class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
       vector<int>result;
       if(s.empty()||words.empty()) return result;
       int word_len=words[0].length();
       int word_count=words.size();
       int window_size=word_len*word_count;
       int s_len=s.length();
        unordered_map<string,int>freq;
        for(string word:words){
            freq[word]++;
        }
        

       for(int i=0;i<word_len;i++){
        int left=i,right=i;
        unordered_map<string,int>seen;
         while(right+word_len<=s_len){
        string word=s.substr(right,word_len);
        right+=word_len;
        
            if(freq.find(word)!=freq.end()){
                seen[word]++;
                while(seen[word]>freq[word]){
                   string left_word=s.substr(left,word_len);
                   seen[left_word]--;
                   left+=word_len;
                }
                if(right-left==window_size){
                    result.push_back(left);
                }
            }
            else{
                seen.clear();
                left=right;
            }
         }


       }
       return result;
    }
};
