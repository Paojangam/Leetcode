class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    if (k == 0) {
        long long pref = 0;
        unordered_map<long long,int> seen; 
        seen[0] = -1;
        for (int i = 0; i < n; ++i) {
            pref += nums[i];
            if (seen.find(pref) != seen.end()) {
                if (i - seen[pref] > 1) return true;
            } else {
                seen[pref] = i;
            }
        }
        return false;
    }

    long long pref = 0;
    unordered_map<int,int> remIndex;
    remIndex[0] = -1; 
    int K = abs(k); 
    for (int i = 0; i < n; ++i) {
        pref += nums[i];
        int r = (int)(pref % K);
        if (r < 0) r += K; 
        if (remIndex.find(r) != remIndex.end()) {
            if (i - remIndex[r] > 1) return true; 
        } else {
            remIndex[r] = i; 
        }
    }
    return false;
}


};
