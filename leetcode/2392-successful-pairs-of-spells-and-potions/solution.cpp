class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long suc){
        sort(p.begin(),p.end());
        int n=p.size();vector<int> r;
        for(int i=0;i<s.size();i++){
            long long need=(suc+s[i]-1)/s[i];
            int l=0,h=n;
            while(l<h){
                int m=(l+h)/2;
                if(p[m]>=need)h=m;
                else l=m+1;
            }
            r.push_back(n-l);
        }
        return r;
    }
};

