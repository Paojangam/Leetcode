class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        vector<int> current;
        solve(0, nums, current);
        return result;
    }

    vector<vector<int>> result;

    void solve(int i, vector<int>& nums, vector<int>& current) {
        int n = nums.size();
        result.push_back(current);

        for (int j = i; j < n; j++) {
            if (j > i && nums[j] == nums[j - 1]) continue;

            current.push_back(nums[j]);
            solve(j + 1, nums, current);
            current.pop_back();
        }
    }
};

