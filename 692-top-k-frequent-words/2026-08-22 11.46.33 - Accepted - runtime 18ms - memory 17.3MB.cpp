class Solution {
public:
    static bool cmp(pair<string,int>&a, pair<string,int>&b){
        if(a.second != b.second){
            return a.second > b.second;
        }
        return a.first < b.first;
    }


    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(auto i:words){
            mp[i]++;
        }

        vector<pair<string,int>> ans;
        for(auto i:mp){
            ans.push_back({i.first, i.second});
            cout<<i.first<<" "<< i.second<<endl;
        }
        sort(ans.begin(),ans.end(),cmp);
        vector<string>n;
        for(int i=0;i<k;i++){
            n.push_back(ans[i].first);
        }
    return n;
    }
};