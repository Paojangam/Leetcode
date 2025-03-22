class Solution {
public:
    string makeGood(string s) {
        string result;
        for (char ch : s) {
            if (!result.empty() &&
               ((ch == tolower(result.back()) && isupper(result.back())) ||
                (ch == toupper(result.back()) && islower(result.back())))) {
                result.pop_back();
            } else {
                result.push_back(ch);
            }
        }
        return result;
    }
};

