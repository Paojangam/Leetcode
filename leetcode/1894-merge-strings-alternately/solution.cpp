class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int left=0;
        int right=0;
        int n=word1.size();
        int m=word2.size();
        string result;
        while(left<n && right<m){
        result.push_back(word1[left]);
        result.push_back(word2[right]);
        left++;
        right++;

        }
        while (left<n){
        result.push_back(word1[left]);
        left++;
        }
         while (right<m){
        result.push_back(word2[right]);
        right++;
        }
 return result;
       
    }
};

