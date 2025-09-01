class TrieNode{
public:
    TrieNode* next[26]={};
    vector<string> words; // store up to 3 lexicographically smallest words
};

class Solution {
    TrieNode* root;
public:
    Solution(){root=new TrieNode();}
    
    void insert(string &s){
        TrieNode* cur=root;
        for(char c:s){
            if(!cur->next[c-'a'])cur->next[c-'a']=new TrieNode();
            cur=cur->next[c-'a'];
            if(cur->words.size()<3)cur->words.push_back(s);
        }
    }
    
    vector<vector<string>> suggestedProducts(vector<string>& products, string sw) {
        sort(products.begin(), products.end());
        root=new TrieNode();
        for(auto &p:products) insert(p);
        
        vector<vector<string>> res;
        TrieNode* cur=root;
        for(char c:sw){
            if(cur) cur=cur->next[c-'a'];
            if(cur) res.push_back(cur->words);
            else res.push_back({});
        }
        return res;
    }
};

