class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int count=1;
        
        vector<int>freq;
        for(int i=1;i<=arr.size();i++){

            if(i==arr.size()||arr[i]!=arr[i-1]){
                freq.push_back(count);
                count=1;
            }else{
                count++;
            }
        }
        for(int i=0;i<freq.size();i++){
            for(int j=i+1;j<freq.size();j++){
                if(freq[i]==freq[j]){
                    return false;
                }
            }
        }
        return true;

    }
};
