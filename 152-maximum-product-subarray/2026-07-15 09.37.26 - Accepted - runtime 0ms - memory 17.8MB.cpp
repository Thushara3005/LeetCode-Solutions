class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int i=0,j=1;
        // int n=nums.size();
        // int ans=0;
        // if(n==1){
        //     return nums[i];
        // }
        // while(j!=n){
        //     int maxi=max(nums[i], nums[j]);
        //     int sum=nums[i] * nums[j];
        //     int ansi=max(maxi,sum);
        //     ans=max(ans,ansi);
        //     i++;
        //     j++;
        // }
        // return ans;

        // approach 2 O(n**2);
        // int ans=0;
        // int n=nums.size();
        // if(n==1){
        //     return nums[0];
        // }
        // for(int i=0;i<n;i++){
        //     int sum=1;
        //     for(int j=i;j<n;j++){
        //         sum*=nums[j];
        //         ans=max(sum,ans);
        //     }
        // }
        // return ans;

        // approach 3 O(n);
        int maxi=nums[0];
        int mini=nums[0];
        int n=nums.size();
        int ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(maxi,mini);
            }
            maxi=max(nums[i], maxi*nums[i]);
            mini=min(nums[i], mini*nums[i]);
            ans=max(ans,maxi);
        }
        return ans;
    }
};