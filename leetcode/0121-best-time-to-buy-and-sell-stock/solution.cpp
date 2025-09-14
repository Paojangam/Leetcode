class Solution {
public:    
int maxProfit(vector<int>& nums) {
   int mincp=INT_MAX;
   int maxprofit=0;

   for(int num: nums){
    if(num<mincp){
        mincp=num;
    }
    int profit=num-mincp;
    if(profit>maxprofit){
        maxprofit=profit;
    }
   }
   return maxprofit;

}

    
};
