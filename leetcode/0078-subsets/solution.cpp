class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<int> current;
        solve(0, nums, current);
        return result;
        
        
    }
     vector<vector<int>> result;
     void solve(int i, vector<int>&nums, vector<int> &current){
        int n=nums.size();
        if (i==n) {
        result.push_back(current);
        return;
        }

        current.push_back(nums[i]);
        solve(i+1,nums,current);
        current.pop_back();
        solve(i+1,nums,current);

    }
};
