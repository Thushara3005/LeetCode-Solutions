class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mx=*max_element(nums.begin(), nums.end());
        vector<int> count(mx+1,0);
        for(int i:nums){
            count[i]++;
        }

        int index=0;
        for(int i=0;i<=mx;i++){
            while(count[i]>0){
                nums[index++]=i;
                count[i]--;
            }
        }
    }
};