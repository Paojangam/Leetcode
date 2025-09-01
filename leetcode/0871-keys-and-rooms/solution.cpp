class Solution{
public:
    bool canVisitAllRooms(vector<vector<int>>& r){
        int n=r.size();
        vector<bool> v(n,false);
        queue<int> q;q.push(0);v[0]=1;
        while(!q.empty()){
            int t=q.front();q.pop();
            for(int k:r[t])if(!v[k]){v[k]=1;q.push(k);}
        }
        for(bool b:v)if(!b)return false;
        return true;
    }
};

