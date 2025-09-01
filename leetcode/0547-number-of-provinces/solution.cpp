class Solution{
public:
    int findCircleNum(vector<vector<int>>& g){
        int n=g.size(),res=0;
        vector<bool> v(n,false);
        for(int i=0;i<n;i++){
            if(!v[i]){
                res++;
                queue<int> q;q.push(i);v[i]=1;
                while(!q.empty()){
                    int t=q.front();q.pop();
                    for(int j=0;j<n;j++)if(g[t][j]&&!v[j]){v[j]=1;q.push(j);}
                }
            }
        }
        return res;
    }
};

