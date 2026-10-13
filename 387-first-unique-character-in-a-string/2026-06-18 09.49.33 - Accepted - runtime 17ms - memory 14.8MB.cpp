class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> stk;
        for(char i: s){
            stk[i]++;
        }
        for(int i=0;i<s.length();i++){
            if(stk[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};