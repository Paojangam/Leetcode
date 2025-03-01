class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,bool> map;
        vector<int>arr;
        for(int num:nums){
            map[num]=true;
        }
        for(int i=1;i<=nums.size();i++){
            if(map.find(i)==map.end()){
                arr.push_back(i);
            }
        }
       return arr; 
    }
};
