class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int ans=0, left=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            while(mp.size()>k){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            ans+=i-left+1;
        }
        return ans;
    }
    

    int subarraysWithKDistinct(vector<int> nums, int k){
        return atMost(nums, k) - atMost(nums, k - 1);
    }


};