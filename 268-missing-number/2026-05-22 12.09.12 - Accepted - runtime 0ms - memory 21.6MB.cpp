class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        int expect=0;
        for(int i: nums){
            expect+=i;
        }
        return sum-expect;
    }
};

// class Solution {
// public:

//     bool binarySearch(vector<int>&nums, int target){
//         int low=0,high=nums.size()-1;
//         while(low<=high){
//             int mid=(low+high)/2;
//             if(nums[mid]==target){
//                 return true;
//             }
//             else if(nums[mid]<target){
//                 low=mid+1;
//             }
//             else{
//                 high=mid-1;
//             }
//         }
//         return false;
//     }
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int mn=nums[0];
//         int mx=nums.back();
//         int ans=0;
//         for(int i=mn;i<=mx;i++){
//             if(!binarySearch(nums,i)){
//                 ans=i;
//             }
//         }
//         return ans;
//     }
// };