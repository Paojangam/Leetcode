class Solution {
public:    
int maxProfit(vector<int>& nums) {
  int minCP=INT_MAX;
  int maxprofit=INT_MIN;
  for(int num:nums){
    if(num<minCP){
        minCP=num;
    }
    int profit=num-minCP;
    if(profit>maxprofit){
        maxprofit=profit;
    }
  }
  return maxprofit;

}

    
};
