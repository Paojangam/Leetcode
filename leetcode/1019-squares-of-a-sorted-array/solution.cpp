class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr;
        int result=1;
        for(int i=0;i<nums.size();i++){
            result=nums[i]*nums[i];
             arr.push_back(result);
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};
