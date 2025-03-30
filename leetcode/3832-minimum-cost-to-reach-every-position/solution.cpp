class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
    vector<int>result;
        int coste=INT_MAX;
        
        for(int i=0;i<cost.size();i++){
            if(cost[i]<coste){
                result.push_back(cost[i]);
                coste=cost[i];
            }else {
               result.push_back(coste);
            }
                
            }
        
        
        return result;
    }
};
