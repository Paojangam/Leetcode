class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // Initialize variables
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;

        // Traverse through the array
        for (int num : nums) {
            // Update top 3 maximums
            if (num > max1) {
                max3 = max2;
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max3 = max2;
                max2 = num;
            } else if (num > max3) {
                max3 = num;
            }

            // Update top 2 minimums
            if (num < min1) {
                min2 = min1;
                min1 = num;
            } else if (num < min2) {
                min2 = num;
            }
        }

        // Maximum product is either:
        // 1. Product of three largest numbers (max1 * max2 * max3)
        // 2. Product of two smallest numbers and the largest number (min1 * min2 * max1)
        return max(max1 * max2 * max3, min1 * min2 * max1);
    }
};
