class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i = 0, j = sqrt(c);
        long long sum = 0;
        while (i <= j) {
            sum = i * i + j * j;
            if (sum == c) {
                return true;
            }
            if (sum < c) {
                i++;
            } else {
                j--;
            }
        }
        return false;
    }
};