class Solution {
public:
    int countAsterisks(string s) {
        stack<char> st;
        int count=0;
        bool inside=false;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='|'){
                inside=!inside;
            }
            else if(s[i]=='*' && inside==false){
                count++;
            }
        }
        return count;
    }
};