class Solution {
public:
    
      
int maxProfit(vector<int>& prices) {
  int min_price=INT_MAX;
  int maxProfit=0;
  for(int price : prices){
    min_price=min(min_price, price);
    maxProfit=max(maxProfit, price-min_price);
  }
  return maxProfit;
}
    
};
