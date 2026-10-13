class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stk;
        int n=s.length();
        string ans;
        for(char c:s){
            if(c=='('){
                if(!stk.empty()){
                    ans+=c;
                }
                stk.push(c);
            }
            else{
                stk.pop();
                if(!stk.empty()){
                    ans+=c;
                }
            }
        }
        return ans;
    }
};