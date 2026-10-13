class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
            int s=nums[i]+ans[i-1];
            ans.push_back(s);
        }
        return ans;
    }
};