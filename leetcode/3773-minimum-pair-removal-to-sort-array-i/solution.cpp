class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int count=0;
        while(true){
            if(issort(nums)){
                break;
            }
            int min=INT_MAX;
            int index=0;
            for(int i=0;i<nums.size()-1;i++){
                int summ=nums[i]+nums[i+1];
                       if(summ<min){
                    min =summ;
                    index=i;
                }
            }
            nums[index]=nums[index]+nums[index+1];
            nums.erase(nums.begin()+index+1);
            count++;
        }
      return count;  
    }
bool issort(vector<int>&nums){
    for(int i=0;i<nums.size()-1;i++){
    if(nums[i]>nums[i+1])  return false;
    
    }
return true;
}
};
