class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(string i: tokens){
            if(i=="+" || i=="-" || i=="*" || i=="/"){
                int b=stk.top();
                stk.pop();
                int a=stk.top();
                stk.pop();
                if(i=="+"){
                    stk.push(b+a);
                }
                else if(i=="-"){
                    stk.push(a-b);
                }
                else if(i=="*"){
                    stk.push(b*a);
                }
                else if(i=="/"){
                    stk.push(a/b);
                }
            }
            else{
                    stk.push(stoi(i));
                }
        }
        return stk.top();
    }
};