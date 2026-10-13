class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int k=j+1;
                int m=n-1;
                while(k<m){
                    long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[m];
                    if(sum==target){
                        s.insert({nums[i], nums[j], nums[k], nums[m]});
                        k++;
                        m++;
                    }
                    if(sum<target){
                        k++;
                    }
                    else{
                        m--;
                    }
                }
            }
        }
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;
    }
};