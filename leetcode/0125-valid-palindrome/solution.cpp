class Solution {
public:
    bool isPalindrome(string s) {
    int left = 0, right = s.size() - 1;

    while (left < right) {
        // Move left pointer until it points to an alphanumeric character
        while (left < right && !isalnum(s[left])) left++;
        // Move right pointer until it points to an alphanumeric character
        while (left < right && !isalnum(s[right])) right--;

        // Convert both characters to lowercase and compare
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}
};
