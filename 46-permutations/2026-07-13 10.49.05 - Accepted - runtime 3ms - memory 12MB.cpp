class Solution {
public:
    vector<vector<int>> ans;
    void solve(int a, vector<int>nums){
        if(a==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=a;i<nums.size();i++){
            swap(nums[a], nums[i]);
            solve(a+1, nums);
            swap(nums[a], nums[i]);
        }
    }  
    vector<vector<int>> permute(vector<int>& nums) {
        solve(0,nums);
        return ans;
    }
};