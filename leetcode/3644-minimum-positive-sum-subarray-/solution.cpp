class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int minSum = INT_MAX;

        for (int k = l; k <= r; ++k) {
            int windowSum = 0;
            for (int i = 0; i < k; ++i) {
                windowSum += nums[i];
            }
            if (windowSum > 0) minSum = min(minSum, windowSum);

            for (int i = k; i < n; ++i) {
                windowSum += nums[i] - nums[i - k];
                if (windowSum > 0) minSum = min(minSum, windowSum);
            }
        }

        return (minSum == INT_MAX) ? -1 : minSum;
    }
};


