class Solution {
public:
 int robline(vector<int>nums, int start, int end){
    int prev=0;
    int curr=0;
    for(int i= start;i<=end;i++){
        int temp=max(curr,prev+nums[i]); 
        prev=curr;
        curr=temp;
    }
    return curr;
 }
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return nums[0];
        int option1=robline(nums,0,n-2);
        int option2=robline(nums,1,n-1);

return max(option1,option2);
        

    }
    
};
