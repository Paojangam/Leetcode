class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
                if (nums.empty()) return 0; // Edge case: empty array

                        int k = 1; // The first element is always unique
                                for (int i = 1; i < nums.size(); i++) {
                                            if (nums[i] != nums[i - 1]) { // Found a new unique element
                                                            nums[k] = nums[i]; // Move unique element to its correct position
                                                                            k++;
                                                                                        }
                                                                                                }
                                                                                                        return k;
                                                                                                            } 
                                                                                                            };



   


