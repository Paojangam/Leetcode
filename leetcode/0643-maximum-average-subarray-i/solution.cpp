class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      double sum=0;
       
        for(int i=0;i<k;i++){
            sum+=nums[i];
            
        }
        
       double max_average=sum/k;
        for(int i=k;i<nums.size();i++){
             sum+=nums[i]-nums[i-k];
            
             max_average=max(sum/k,max_average);
        }
        return max_average;
    }
};
