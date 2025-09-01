class Solution{
public:
    int ans=0;
    int minReorder(int n, vector<vector<int>>& c){
        vector<vector<pair<int,int>>> g(n);
        for(auto &x:c){
            g[x[0]].push_back({x[1],1});
            g[x[1]].push_back({x[0],0});
        }
        dfs(0,-1,g);
        return ans;
    }
    void dfs(int u,int p,vector<vector<pair<int,int>>>& g){
        for(auto x:g[u]){
            int v=x.first,f=x.second;
            if(v==p)continue;
            ans+=f;
            dfs(v,u,g);
        }
    }
};

