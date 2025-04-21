class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n;
        while(left<right){
            int mid=(left+right)/2;
            if(nums[mid]<0){
                left=mid+1;
            }else{
                right=mid;
            }
        }
        int negacount=left;
        left=0,right=n;
        while(left<right){
            int mid=(left+right)/2;
            if(nums[mid]<=0){
                left=mid+1;
            }else{
                right=mid;
            }
        }
        int posicount=n-left;
        return max(negacount,posicount);
        
    }
};
