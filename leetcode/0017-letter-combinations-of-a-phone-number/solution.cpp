class Solution{
public:
    vector<string> letterCombinations(string d){
        if(d.empty())return{};
        vector<string> ans;
        string cur;
        string m[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        dfs(d,0,cur,m,ans);
        return ans;
    }
    
    void dfs(string &d,int i,string &cur,string m[],vector<string> &ans){
        if(i==d.size()){ans.push_back(cur);return;}
        for(char c:m[d[i]-'0']){cur.push_back(c);dfs(d,i+1,cur,m,ans);cur.pop_back();}
    }
};

