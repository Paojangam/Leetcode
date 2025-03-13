class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element_sum=0;
        int degit_sum=0;
        for(int num: nums){
            element_sum += num;
            int temp=num;
            while(temp>0){
                degit_sum +=temp%10;
                temp/=10;
            }
        }
        return element_sum - degit_sum;
    }
};
