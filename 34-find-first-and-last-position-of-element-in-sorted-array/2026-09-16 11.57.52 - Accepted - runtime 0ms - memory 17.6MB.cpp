class Solution {
public:

    int lower(vector<int> &nums, int target){
        int n=nums.size();
        int l=0,j=n-1;
        int ans=-1;
        while(l<=j){
            int mid=(l+j)/2;
            if(nums[mid]==target){
                ans=mid;
                j=mid-1;
            }
            else if(nums[mid]>target){
                j=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
    int upper(vector<int>& nums, int target){
        int n=nums.size();
        int l=0,j=n-1;
        int ans=-1;
        while(l<=j){
            int mid=(l+j)/2;
            if(nums[mid]==target){
                ans=mid;
                l=mid+1;
            }
            else if(nums[mid]>target){
                j=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int l=lower(nums,target);
        int u=upper(nums,target);
        return {l,u};
    }
};