class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     vector<int> arr;
     int n=digits.size();
     for(int i=n-1;i>=0;--i){
        if(digits[i]<9){
            digits[i]+=1;
            return digits;
        } digits[i]=0;
        
     } arr.push_back(1);
     arr.insert(arr.end(),digits.begin(),digits.end());
     return arr;
     }
};
