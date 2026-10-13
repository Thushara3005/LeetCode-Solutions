class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     int count=0;
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[i]>nums[j]){
        //             count++;
        //         }
        //     }
        //     ans.push_back(count);
        // }
        // return ans;

        vector<int> count(101,0);
        for(int i:nums){
            count[i]++;
        }
        for(int i=1;i<=100;i++){
            count[i]+=count[i-1];
        }
        vector<int> ans;
        for(int i: nums){
            if(i==0){
                ans.push_back(0);
            }
            else{
                ans.push_back(count[i-1]);
            }
        }
        return ans;
    }
};