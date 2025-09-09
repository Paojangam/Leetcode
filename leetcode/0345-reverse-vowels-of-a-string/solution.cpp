class Solution {
public:
    string reverseVowels(string s) {
        int left=0;
        int right=s.size()-1;
        unordered_set<char>vowel={'a','e','i','o','u','A','E','I','O','U'};
        while(left<right){
            if(!vowel.count(s[left])){
                left++;
                continue;
            }
            if(!vowel.count(s[right])){
                right--;
                continue;
            }
            swap(s[left], s[right]);
            left++;
            right--;
        }
       return s; 
    }
};
