class Solution {
public:
    int findLHS(vector<int>& nums) {
       unordered_map<int,int>freq;
       for(int num:nums){
        freq[num]++;
       }
       int max_len=0;
       for(auto [nums,count]:freq){
        if(freq.count(nums+1)){
            max_len=max(max_len,count+freq[nums+1]);
        }
       }
       return max_len;
    }
};

