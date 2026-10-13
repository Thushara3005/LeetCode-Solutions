class Solution {
public:
    static bool cmp(pair<char,int> a, pair<char,int>b){
        if(a.second!=b.second){
            return a.second>b.second;
        }
        return a.first<b.first;
    }

    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        vector<pair<char, int>> v;
        for(auto i:mp){
            v.push_back({i.first,i.second});
        }
        sort(v.begin(),v.end(),cmp);
        string ans="";
        for(auto i:v){
            while(i.second!=0){
                ans+=i.first;
                i.second--;
            }
        }
        return ans;
    }
};