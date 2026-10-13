class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int n=num.length();
        for(int i=0;i<n;i++){
            while(k!=0 && !st.empty() && st.top()>num[i]){
                st.pop();
                k--;
            }
        st.push(num[i]);
        }
        while(k!=0 && !st.empty()){
            k--;
            st.pop();
        }
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        while(ans!="" && ans.back()=='0'){
            ans.pop_back();
        }
        reverse(ans.begin(), ans.end());
        if(ans==""){
            ans= '0';
        }
        return ans;

    }
};