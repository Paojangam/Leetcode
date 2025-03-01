class Solution {
public:
    int missingNumber(vector<int>& nums) {
   unordered_map<int,bool>temp;
   for(int num:nums){
    temp[num]=true;
   }
   for(int i=0;i<=nums.size();i++){
    if(temp.find(i)==temp.end()){
        return i;
    }
   }
   return -1;
    }
};
