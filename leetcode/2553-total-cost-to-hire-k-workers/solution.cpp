class Solution{
public:
    long long totalCost(vector<int>& c,int k,int can){
        int n=c.size();
        long long res=0;
        priority_queue<int,vector<int>,greater<int>> l,r;
        int i=0,j=n-1;
        for(int cnt=0;cnt<can&&i<=j;i++,cnt++)l.push(c[i]);
        for(int cnt=0;cnt<can&&i<=j;j--,cnt++)r.push(c[j]);
        while(k--){
            if(!r.size()|| (l.size()&&l.top()<=r.top())){
                res+=l.top();l.pop();
                if(i<=j)l.push(c[i++]);
            }else{
                res+=r.top();r.pop();
                if(i<=j)r.push(c[j--]);
            }
        }
        return res;
    }
};

