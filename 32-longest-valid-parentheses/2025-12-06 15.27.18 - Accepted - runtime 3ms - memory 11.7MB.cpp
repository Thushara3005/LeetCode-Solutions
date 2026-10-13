// class Solution {
// public:
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
    class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);  // base index
        int longest = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();

                if (st.empty()) {
                    st.push(i);     // reset base
                } else {
                    longest = max(longest, i - st.top());
                }
            }
        }

        return longest;
    }
};

// };