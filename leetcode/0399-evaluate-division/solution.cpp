class Solution{
public:
    vector<double> calcEquation(vector<vector<string>>& e, vector<double>& v, vector<vector<string>>& q){
        unordered_map<string,vector<pair<string,double>>> g;
        for(int i=0;i<e.size();i++){
            g[e[i][0]].push_back({e[i][1],v[i]});
            g[e[i][1]].push_back({e[i][0],1.0/v[i]});
        }
        vector<double> r;
        for(auto &qu:q){
            unordered_set<string> vis;
            double val=dfs(qu[0],qu[1],g,vis);
            r.push_back(val);
        }
        return r;
    }
    double dfs(string a,string b,unordered_map<string,vector<pair<string,double>>>& g,unordered_set<string>& vis){
        if(!g.count(a)||!g.count(b))return -1.0;
        if(a==b)return 1.0;
        vis.insert(a);
        for(auto &x:g[a]){
            if(vis.count(x.first))continue;
            double tmp=dfs(x.first,b,g,vis);
            if(tmp!=-1.0)return tmp*x.second;
        }
        return -1.0;
    }
};

