class Solution {
public:
    int reverse(int x) {
        int reversedNum = 0;
        
        while (x != 0) {
            int lastDigit = x % 10;  // Extract the last digit
            
            // Check for overflow before multiplying by 10
            if (reversedNum > INT_MAX/10 || (reversedNum == INT_MAX / 10 && lastDigit > 7)) {
                return 0;  // Overflow would occur
            }
            if (reversedNum < INT_MIN/10 || (reversedNum == INT_MIN / 10 && lastDigit < -8)) {
                return 0;  // Underflow would occur
            }
            
            reversedNum = reversedNum * 10 + lastDigit;  // Build the reversed number
            x /= 10;  // Remove the last digit from x
        }
        
        return reversedNum;
    }
};

