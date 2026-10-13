class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        // for(int i=0;i<n;i++){
        //     int count=1;
        //     for(int j=0;j<n;j++){
        //         if(i!=j){
        //             count*=nums[j];    
        //         }
                
        //     }
        //     ans[i]=count;
        // }
        // return ans;
        int prefix=1;
        for(int i=0;i<n;i++){
            ans[i]=prefix;
            prefix*=nums[i];
        }
        int suffix=1;
        for(int i=n-1;i>=0;i--){
           ans[i]*=suffix;
           suffix*=nums[i];
        }
        return ans;
    }
};