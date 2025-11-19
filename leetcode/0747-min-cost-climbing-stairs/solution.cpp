class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int prev1=cost[0];
        int prev2=cost[1];
        for(int i=2;i<n;i++){
            int cur = cost[i]+min(prev1,prev2);
            prev1=prev2;
            prev2=cur;

        }
        return min(prev1,prev2);

      
    }
};

