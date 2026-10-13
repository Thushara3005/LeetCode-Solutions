class Solution {
public:
    int mod = 1337;

    int superPow(int a, vector<int>& b) {
        int result = 1;
        a %= mod;

        for (int digit : b) {
            result = (power(result, 10) * power(a, digit)) % mod;
        }

        return result;
    }

    int power(int a, int b) {
        int result = 1;
        a %= mod;

        while (b > 0) {
            if (b % 2 == 1) {
                result = (result * a) % mod;
            }

            a = (a * a) % mod;
            b /= 2;
        }

        return result;
    }
};