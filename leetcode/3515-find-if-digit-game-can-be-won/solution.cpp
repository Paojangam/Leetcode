class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
       int single=0;
       int doubl=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]/10>0){
            doubl +=nums[i];
        }else{
            single +=nums[i];
        }
       } 
       if(single!=doubl){
        return true;
       }
       return false;
    }
};
