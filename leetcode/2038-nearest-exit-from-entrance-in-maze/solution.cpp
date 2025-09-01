class Solution{
public:
    int nearestExit(vector<vector<char>>& m, vector<int>& e){
        int R=m.size(),C=m[0].size();
        queue<pair<int,int>> q;q.push({e[0],e[1]});
        vector<vector<int>> d(R,vector<int>(C,-1));d[e[0]][e[1]]=0;
        int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()){
            auto p=q.front();q.pop();
            int r=p.first,c=p.second;
            for(auto &dr:dir){
                int nr=r+dr[0],nc=c+dr[1];
                if(nr<0||nc<0||nr>=R||nc>=C||m[nr][nc]=='+')continue;
                if(d[nr][nc]!=-1)continue;
                d[nr][nc]=d[r][c]+1;
                if(nr==0||nc==0||nr==R-1||nc==C-1)return d[nr][nc];
                q.push({nr,nc});
            }
        }
        return -1;
    }
};

