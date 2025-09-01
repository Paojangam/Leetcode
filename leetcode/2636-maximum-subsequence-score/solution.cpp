class Solution{
public:
    long long maxScore(vector<int>& n1, vector<int>& n2, int k){
        int n=n1.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)v.push_back({n2[i],n1[i]});
        sort(v.rbegin(),v.rend());
        priority_queue<int,vector<int>,greater<int>> pq;
        long long s=0,ans=0;
        for(auto &p:v){
            pq.push(p.second);
            s+=p.second;
            if(pq.size()>k){s-=pq.top();pq.pop();}
            if(pq.size()==k)ans=max(ans,s*1LL*p.first);
        }
        return ans;
    }
};

