class Solution {
public:
    static bool custom(pair<int,char>& a, pair<int,char>& b){
        return a.first>b.first;
    }
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(auto i: s){
            freq[i]++;
        }
        vector<pair<int, char>> v;
        for(auto num: freq){
            v.push_back({num.second, num.first});
        }
        sort(v.begin(), v.end(), custom);
        string ans="";
        for(auto i:v){
            ans.append(i.first,i.second);
        }
        return ans;
    }
};