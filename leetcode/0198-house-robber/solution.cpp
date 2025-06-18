class Solution {
public:
    int rob(vector<int>& nums) {
        int start1=0;
        int start2=0;
        for(int num: nums){
            int temp= start1;
            start1=max(start1, start2+num);
            start2=temp;

            
        }
        return start1;
        
        
    }
};
