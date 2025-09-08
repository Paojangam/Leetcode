class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min=*min_element(nums.begin(),nums.end());
        int max=*max_element(nums.begin(),nums.end());
        int gcdof=1;
        for(int i= min;i>1;i--){
            if(min%i==0 && max% i ==0){
                gcdof=i;
                break;
            }
        }


        return gcdof;
    }
};
