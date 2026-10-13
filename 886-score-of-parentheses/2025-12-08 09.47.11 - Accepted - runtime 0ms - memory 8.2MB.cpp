class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> stk;
        stk.push(0);
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                stk.push(0);
            }
            else{
                int top=stk.top();
                stk.pop();
                int count= (top==0) ? 1: 2* top;
                stk.top()+=count;
            }
        }
        return stk.top();
    }
};