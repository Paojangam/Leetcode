class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;

        while (n > 0) {
            int digit = n % 10;  // Extract last digit
            sum += digit;        // Add to sum
            product *= digit;    // Multiply into product
            n /= 10;             // Remove last digit
        }

        return product - sum;
    }
};

