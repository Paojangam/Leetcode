class Solution {
public:
    bool closeStrings(string word1, string word2) {
     if(word1.length()!=word2.length()){
            return false;
        }
        int count=0;
        unordered_map<char,int>freq1,freq2;
        vector<int>v,v1;
        for(char ch:word1) freq1[ch]++;
        for(char ch:word2) freq2[ch]++;
        for(auto &entry: freq1){
            v.push_back(entry.second);
        }
        for(auto &entry: freq2){
            v1.push_back(entry.second);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        

        
        unordered_set<char>set1(word1.begin(),word1.end());
        unordered_set<char>set2(word2.begin(),word2.end());
if (set1 != set2) return false;

        
return v==v1;
    }
};
