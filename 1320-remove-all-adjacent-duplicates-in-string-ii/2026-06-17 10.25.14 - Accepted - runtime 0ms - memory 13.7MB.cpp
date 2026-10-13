class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> stk;
        for(char i:s){
            if(!stk.empty() && stk.back().first==i){
                stk.back().second++;
                if(stk.back().second==k){
                stk.pop_back();
            }
            }
            else{
                stk.push_back({i,1});
            }
        }
        string ans;
        for(auto &i:stk){
            ans.append(i.second,i.first);
        }
        return ans;
    }
};