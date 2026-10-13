class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int n=nums.size();
        // int low=0,high=n-1;
        // while(low<=high){
        //     int mid=(low+high)/2;
        //     if(nums[mid]==target){
        //         ans.push_back(mid);
        //         high=mid-1;
        //     }
        //     else if(nums[mid]>target){
        //         high=mid-1;
        //     }
        //     else{
        //         low=mid+1;
        //     }
        // }
        // return ans;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                ans.push_back(i);
            }
        }
        return ans;
    }
};