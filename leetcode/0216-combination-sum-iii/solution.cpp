class Solution{
public:
    vector<vector<int>> combinationSum3(int k,int n){
        vector<vector<int>> ans;
        vector<int> cur;
        dfs(1,k,n,cur,ans);
        return ans;
    }
    
    void dfs(int start,int k,int n,vector<int> &cur,vector<vector<int>> &ans){
        if(cur.size()==k&&n==0){ans.push_back(cur);return;}
        if(cur.size()>=k||n<0)return;
        for(int i=start;i<=9;i++){
            cur.push_back(i);
            dfs(i+1,k,n-i,cur,ans);
            cur.pop_back();
        }
    }
};

