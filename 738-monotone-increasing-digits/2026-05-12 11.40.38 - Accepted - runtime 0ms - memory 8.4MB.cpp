class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s = to_string(n);
        int change=s.length();
        for(int i=s.length()-1;i>0;i--){
            if(s[i-1]>s[i]){
                s[i-1]--;
                change=i;
            }
        }
        for(int i = change; i < s.length(); i++) {
            s[i] = '9';
        }

        return stoi(s);
    }
};