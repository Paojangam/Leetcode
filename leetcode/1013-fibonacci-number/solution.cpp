class Solution {
    int fibHelper(int n, vector<int> &memo){
        if(n==0) return 0;
        if(n==1) return 1;
        memo[n]=fibHelper(n-1,memo)+fibHelper(n-2,memo);
        return memo[n];
    }
public:
    int fib(int n) {
        vector<int>memo(n+1,-1);
        return fibHelper(n,memo);
        
    }
};
