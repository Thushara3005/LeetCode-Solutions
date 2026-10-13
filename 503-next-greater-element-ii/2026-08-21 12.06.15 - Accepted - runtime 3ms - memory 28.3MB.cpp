class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> stk;

        for (int i = 0; i < 2 * n; i++) {
            int a = i % n;

            while (!stk.empty() && nums[stk.top()] < nums[a]) {
                ans[stk.top()] = nums[a];
                stk.pop();
            }
            if(i<n){
                stk.push(a);
            }
        }

        return ans;
    }
};