
class Solution {
public:
    std::vector<int> findWordsContaining(std::vector<std::string>& words, char x) {
        std::vector<int> result;

        for (int i = 0; i < words.size(); i++) {
            if (words[i].find(x) != std::string::npos) { // Check if 'x' is present in the word
                result.push_back(i); // Store the index
            }
        }
        return result;
    }
};


