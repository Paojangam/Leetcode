class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int >freq;
        for( char ch : s){
            freq[ch]++;
        }
        vector <int>even_arr, odd_arr;
        for(auto it: freq){
            if(it.second%2==0){
                even_arr.push_back(it.second);
            }else{
                odd_arr.push_back(it.second);
            }
        }
        int min_even_arr= *min_element(even_arr.begin(),even_arr.end());
        int max_odd_arr=*max_element(odd_arr.begin(),odd_arr.end());
        return max_odd_arr -min_even_arr;
    }
};
