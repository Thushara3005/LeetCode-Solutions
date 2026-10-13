class Solution {
public:
    // int longestValidParentheses(string s) {
    //     int count=0;
    //     // if(s.length()==0){
    //     //     return 0;
    //     // }
    //     stack<char> stk;
    //     for(int i=0;i<s.length();i++){
    //         if(s[i]=='(' ){
    //              stk.push(s[i]);
    //             if(!stk.empty() && stk.top() == s[i+1]){   
    //                     count=0;
    //             }   
    //         }
    //         else{
    //             if(stk.empty()){
    //                 count+=0;
    //             }
    //             else{
    //                 char x=stk.top();
    //                 stk.pop();
    //                 if((x=='(' && s[i]==')' )){
    //                     count+=2;
                      
    //                 }
    //                 else{
    //                     count=0;
    //                 }
    //             }
    //         }
    //     }
    //     return count;
    // }
    int longestValidParentheses(string s) {
        int count=0;
        stack<int> stk;
        stk.push(-1);
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                stk.push(i);
            }
            else{
                stk.pop();
                if(stk.empty()){
                    stk.push(i);
                }
                else{
                    count=max(count, (i-stk.top()));
                }
            }
        }
        return count;
    }
    
};