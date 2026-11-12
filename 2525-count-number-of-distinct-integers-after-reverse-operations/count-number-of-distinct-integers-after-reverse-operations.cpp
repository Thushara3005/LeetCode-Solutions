class Solution {
public:

    int reverseNum(int n) {
        int rev = 0;

        while (n > 0) {
            int digit = n % 10;

            rev = rev * 10 + digit;

            n /= 10;
        }

        return rev;
    }

    int countDistinctIntegers(vector<int>& nums) {

        unordered_set<int> st;

        for (int n : nums) {

            st.insert(n);

            int rev = reverseNum(n);

            st.insert(rev);
        }

        return st.size();
    }
};