class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
       int n=nums.size();
       int minsum=INT_MAX;
       for(int k=l;k<=r;k++){
        int windowsum=0;
        for(int i=0;i<k;i++){
            windowsum+=nums[i];
        }
        if(windowsum>0) minsum=min(minsum,windowsum);
        for(int i=k;i<n;i++){
            windowsum+=nums[i]-nums[i-k];
        if(windowsum>0) minsum=min(minsum,windowsum);

        }
       }
       return (minsum == INT_MAX) ? -1 : minsum;
    }
};


