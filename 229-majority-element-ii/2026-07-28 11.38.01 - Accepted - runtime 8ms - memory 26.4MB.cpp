class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n=nums.size();
        int k=n/3;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(mp.count(nums[i])){
                if(mp[nums[i]]>k){
                    ans.push_back(nums[i]);
                    mp.erase(nums[i]);
                }
            }
        }
        return ans;
    }
};