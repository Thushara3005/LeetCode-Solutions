class Solution {
public:
    int atmost(vector<int>& nums, int k) {
        int left=0, count=0, odd=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2){
                odd++;
            }
            while(odd>k){
                if(nums[left]%2){
                    odd--;}
                    left++;
                
            }
            count+=i-left+1;
        }
        return count;
    }

    int numberOfSubarrays(vector<int>nums, int k){
        return atmost(nums, k)-atmost(nums,k-1);
    }
};