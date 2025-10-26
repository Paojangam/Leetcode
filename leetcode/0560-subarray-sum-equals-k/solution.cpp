class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n =nums.size();
      unordered_map<int,int>prefixcount;
      int count=0;
      prefixcount[0]=1;
      int currentsum=0;
      for(int i=0;i<n;i++){
        currentsum+=nums[i];
        int  need=currentsum-k;
        if(prefixcount.find(need)!=prefixcount.end()){
            count += prefixcount[need];
        }
        prefixcount[currentsum]++;
      } 
      return count; 
    }
};
