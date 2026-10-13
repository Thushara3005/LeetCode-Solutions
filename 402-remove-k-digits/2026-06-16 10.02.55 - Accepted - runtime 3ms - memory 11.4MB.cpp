class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.length();
        stack<char> stk;
        for(int i=0;i<n;i++){
            while(!stk.empty() && k!=0 && stk.top()>num[i]){
                stk.pop();
                k--;
            }
            stk.push(num[i]);
        }
        while(!stk.empty() && k!=0){
            k--;
            stk.pop();
        }

        string ans="";
        while(!stk.empty()){
            ans.push_back(stk.top());
            stk.pop();
        }
        while(ans!="" && ans.back() =='0'){
            ans.pop_back();
        }
        reverse(ans.begin(), ans.end());
        if(ans==""){
            return "0";
        }
        return ans;
    }
};