class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     unordered_map<int, int>freq;
     vector<int>temp;
     for(int num:nums){
        if(freq[num]<2){
            temp.push_back(num);
            freq[num]++;
        }
     }
     for(int i=0;i<temp.size();i++){
        nums[i]=temp[i];
     }
      return temp.size();
    }
};
