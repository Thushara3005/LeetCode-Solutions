class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> lastIndex;

        int left = 0;
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {

            if (lastIndex.count(s[i])) {
                left = max(left, lastIndex[s[i]] + 1);
            }

            lastIndex[s[i]] = i;

            ans = max(ans, i - left + 1);
        }

        return ans;
    }
};