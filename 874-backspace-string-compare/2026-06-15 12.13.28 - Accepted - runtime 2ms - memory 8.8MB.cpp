class Solution {
public:

    string build(string k){
        stack<char> stk;
        for(auto i: k){
            if(i!='#'){
                stk.push(i);
            }
            else{
                if(!stk.empty()){
                    stk.pop();
                }
            }
        }
        string ans="";
        while(!stk.empty()){
            ans.push_back(stk.top());
            stk.pop();
        }
        return ans;
    }

    bool backspaceCompare(string s, string t) {
        return build(s)==build(t);
        // stack<char> stk1;
        // stack<char> stk2;
        // int n=s.length();
        // for(int i=0;i<n;i++){
        //     if(s[i]!='#'){
        //         stk1.push(s[i]);
        //     }
        //     else if(s[i]=='#'){
        //         stk1.pop();
        //     }
        //     else if(t[i]=='#'){
        //         stk2.pop();
        //     }
        //     else if(t[i]!='#'){
        //         stk2.push(t[i]);
        //     }
        // }
        // string ans1="";
        // string ans2="";
        // while(!stk1.empty()){
        //     ans1.push_back(stk1.top());
        //     stk1.pop();
        // }
        // while(!stk2.empty()){
        //     ans2.push_back(stk2.top());
        //     stk2.pop();
        // }
        // cout<<ans2;
        // return ans1==ans2;
    }
};