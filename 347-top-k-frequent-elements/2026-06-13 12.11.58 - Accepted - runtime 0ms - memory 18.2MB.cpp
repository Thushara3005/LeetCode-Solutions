class Solution {
public:

    static bool custom(pair<int,int>& a, pair<int,int>& b){
        return a.first>b.first;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i: nums){
            freq[i]++;
        }

        vector<pair<int, int>> ans;
        for(auto num: freq){
            ans.push_back({num.second, num.first});
        }
        vector<int> result;
        sort(ans.begin(), ans.end(), custom);
        for(int i=0;i<k;i++){
            if(result.size()<k){
                result.push_back(ans[i].second);
            }
        }
        return result;
    }
};