class Solution {
public:
    unordered_map<long long, double> memo;

    double helper(int a, int b) {
        if (a <= 0 && b <= 0) return 0.5;
        if (a <= 0) return 1.0;
        if (b <= 0) return 0.0;

        long long key = ((long long)a << 32) | b;
        if (memo.count(key)) return memo[key];

        double res = 0.25 * (
            helper(a - 100, b) +
            helper(a - 75, b - 25) +
            helper(a - 50, b - 50) +
            helper(a - 25, b - 75)
        );

        return memo[key] = res;
    }

    double soupServings(int n) {
        if (n >= 5000) return 1.0; // optimization for large n
        n = (n + 24) / 25; // scale down to multiples of 25
        return helper(n * 25, n * 25);
    }
};
