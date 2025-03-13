class Solution {
public:
    string triangleType(vector<int>& nums) {
        // Sort the array to make checking easier
        sort(nums.begin(), nums.end());

        // Check if it forms a valid triangle
        if (nums[0] + nums[1] <= nums[2]) {
            return "none";
        }

        // Determine the type of triangle
        if (nums[0] == nums[1] && nums[1] == nums[2]) {
            return "equilateral";
        } else if (nums[0] == nums[1] || nums[1] == nums[2]) {
            return "isosceles";
        } else {
            return "scalene";
        }
    }
};

