class Solution {
public:
static bool cmp(string a, string b) {
        return a + b > b + a;
    }
    string largestNumber(vector<int>& nums) {
        string ans="";
        vector<string> a;
        for(int i: nums){
            a.push_back(to_string(i));
        }
        sort(a.begin(), a.end(), cmp);
        if(a[0]=="0"){
            return "0";
        }
        for(string i: a){
            ans+=i;
        }
        return ans;
    }
};