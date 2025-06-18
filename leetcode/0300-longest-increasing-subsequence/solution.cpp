class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 1);  // Each number is at least a sequence of length 1

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);  // Extend the subsequence
                }
            }
        }

        // Find the longest subsequence length
        int longest = 0;
        for (int len : dp) {
            longest = max(longest, len);
        }
        return longest;
    }
};

