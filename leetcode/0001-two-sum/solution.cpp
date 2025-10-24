class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
       unordered_map<int,int>map;
       vector<int>result;
       for(int i=0;i<n;i++){
        int second=target-nums[i];
        if(map.find(second)!=map.end()){
            result.push_back(map[second]);

            result.push_back(i);
        }
        map[nums[i]]=i;
          
       }
       return result;
    } 
};
