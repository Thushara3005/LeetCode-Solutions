class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int max_E=0, min_E=0;
        int max_V=INT_MIN,min_V=INT_MAX;
        int total=0;
        for(int i:nums){
            max_E=max(i, max_E+i);
            min_E=min(i, min_E+i);
            max_V=max(max_V, max_E);
            min_V=min(min_V, min_E);
            total+=i;
        }
        if(max_V<0){
                return max_V;
        }
        return max(max_V, total-min_V);
        
    }
};