class Solution {
public:

    static bool cmp(pair<string,int>a, pair<string,int> b){
        if(a.second!=b.second){
            return a.second> b.second;
        }
        return a.first< b.first;
    }
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> mp;
        for (char &c : paragraph) {
            if (ispunct(c)) {
                c = ' ';
            }
            else {
                c = tolower(c);
            }
        }

        stringstream ss(paragraph);
        string word ="";
        while(ss>>word){
            if(ban.find(word)==ban.end()){
                mp[word]++;
            }
        }
        vector<pair<string,int>> v(mp.begin(),mp.end());
        sort(v.begin(),v.end(), cmp);
        for(auto i:mp){
            
            cout<<i.first<<" "<<i.second<<endl;
        }
        return v[0].first;
    }
};