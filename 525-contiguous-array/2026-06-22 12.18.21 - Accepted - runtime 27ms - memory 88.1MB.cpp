class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     int zero=0,ones=0;
        //     for(int j=i;j<nums.size();j++){
        //         if(nums[j]==0){
        //             zero+=1;
        //         }
        //         else{
        //             ones+=1;
        //         }

        //         if(zero==ones){
        //         ans=max(ans, zero+ones);
        //     }
        //     }
        // }
        // return ans;
        unordered_map<int, int> stk;
        stk[0]=-1;
        int ans=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                sum+=1;
            }
            else{
                sum+=-1;
            }

            if(stk.find(sum)!=stk.end()){
                ans=max(ans, i-stk[sum]);
            }
            else{
                stk[sum]=i;
            }
        }
        return ans;
    }
};