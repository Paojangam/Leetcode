class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for (int num : numSet) {  // Loop over unique elements only
            if (!numSet.count(num - 1)) {  // Start of a sequence
                int current = num;
                int streak = 1;

                while (numSet.count(current + 1)) {
                    current++;
                    streak++;
                }

                longest = max(longest, streak);
            }
        }

        return longest;
    }
};

