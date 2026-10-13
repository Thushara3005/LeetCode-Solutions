class Solution {
public:
    // int rob(vector<int>& nums) {
    //     int n=nums.size();
    //     if(n==1){
    //         return nums[0];
    //     }
    //     int curr;
    //     int p2=nums[0];
    //     int p1=max(nums[0], nums[1]);
    //     for(int i=2;i<n;i++){
    //         int pick=nums[i]+p2;
    //         int not_pick=p1;
    //         curr=max(pick,not_pick);
    //         p2=p1;
    //         p1=curr;
    //     }
    //     return curr;
    // }

     int robLinear(vector<int>& nums, int l, int r) {
        int p2 = 0;
        int p1 = 0;

        for (int i = l; i <= r; i++) {
            int cur = max(p1, p2 + nums[i]);
            p2 = p1;
            p1 = cur;
        }
        return p1;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1){
            return nums[0];
        }
        if (n == 2){
            return max(nums[0], nums[1]);
        }
        int case1 = robLinear(nums, 0, n - 2);
        int case2 = robLinear(nums, 1, n - 1);
        return max(case1, case2);
    }
};