class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans;
        int n = gain.size();
        int prev = 0;
        int curr = 0;
        for (int i : gain) {
            curr = prev + i;
            ans = max(ans, curr);
            prev = curr;
        }
        return ans;
    }
};