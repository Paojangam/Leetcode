class Solution{
public:
    int orangesRotting(vector<vector<int>>& g){
        int R=g.size(),C=g[0].size(),f=0,res=0;
        queue<pair<int,int>> q;
        for(int i=0;i<R;i++)for(int j=0;j<C;j++){
            if(g[i][j]==2)q.push({i,j});
            else if(g[i][j]==1)f++;
        }
        int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()&&f){
            int n=q.size();res++;
            for(int i=0;i<n;i++){
                auto p=q.front();q.pop();
                for(auto &d:dir){
                    int nr=p.first+d[0],nc=p.second+d[1];
                    if(nr<0||nc<0||nr>=R||nc>=C||g[nr][nc]!=1)continue;
                    g[nr][nc]=2;f--;q.push({nr,nc});
                }
            }
        }
        return f?-1:res;
    }
};

