class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth=0;
        for( const auto&customer:accounts){
            int total_money=0;
            for(int bankmoney:customer){
                total_money +=bankmoney;

            }
            maxWealth=max(total_money,maxWealth) ;
        }
       return maxWealth;
    }
};
