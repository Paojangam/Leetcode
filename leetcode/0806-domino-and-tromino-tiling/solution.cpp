class Solution{
public:
    int numTilings(int n){
        long long mod=1e9+7;
        if(n==1)return 1;
        if(n==2)return 2;
        vector<long long> dp(n+1,0),dp2(n+1,0);
        dp[1]=1;dp[2]=2;
        dp2[2]=1;
        for(int i=3;i<=n;i++){
            dp[i]=(dp[i-1]+dp[i-2]+2*dp2[i-1])%mod;
            dp2[i]=(dp2[i-1]+dp[i-2])%mod;
        }
        return dp[n];
    }
};

