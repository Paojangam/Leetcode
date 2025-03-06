class Solution {
    public:
        string reverseVowels(string s) {
                int left = 0, right = s.size() - 1;
                        string vowels = "aeiouAEIOU";

                                while (left < right) {
                                            // Move left pointer until it finds a vowel
                                                        while (left < right && vowels.find(s[left]) == string::npos) {
                                                                        left++;
                                                                                    }
                                                                                                // Move right pointer until it finds a vowel
                                                                                                            while (left < right && vowels.find(s[right]) == string::npos) {
                                                                                                                            right--;
                                                                                                                                        }
                                                                                                                                                    // Swap vowels at left and right indices
                                                                                                                                                                swap(s[left], s[right]);
                                                                                                                                                                            left++;
                                                                                                                                                                                        right--;
                                                                                                                                                                                                }

                                                                                                                                                                                                        return s;
                                                                                                                                                                                                            }
                                                                                                                                                                                                            };



      
    
    
            
            
           

       
        


