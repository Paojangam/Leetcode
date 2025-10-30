class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;

        merged.reserve(nums1.size() + nums2.size());

        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(merged));

        int m = merged.size();
        if (m % 2 == 1) return merged[m / 2];
        
        return (merged[m / 2 - 1] + merged[m / 2]) / 2.0;
    }
};

