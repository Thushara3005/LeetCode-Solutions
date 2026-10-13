class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // Counting Sorting Approach 
        int mn = *min_element(nums.begin(), nums.end());
        int mx=*max_element(nums.begin(), nums.end());
        vector<int> count(mx-mn+1,0);

        for(int i:nums){
            count[i-mn]++;
        }
        int index=0;
        for(int i=0;i<count.size();i++){
            while(count[i]>0){
                nums[index++]=i+mn;
                count[i]--;
            }
        }
        return nums;
    }
};