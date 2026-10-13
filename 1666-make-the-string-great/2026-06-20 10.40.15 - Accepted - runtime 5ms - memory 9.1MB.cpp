class Solution {
public:
    string makeGood(string s) {
        stack<char> stk;
        for (char i : s) {
            if (!stk.empty() && tolower(stk.top()) == tolower(i) && stk.top() != i) {
                stk.pop();
            } else {
                stk.push(i);
            }
        }
        string ans = "";
        while (!stk.empty()) {
            ans = stk.top()+ans;
            stk.pop();
        }
        return ans;
    }
};

