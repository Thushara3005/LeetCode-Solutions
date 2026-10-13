class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n=s.length();
        vector<int> prev(n,0);
        for(int i=n-1;i>=0;i--){
            vector<int> cur(n,0);
            cur[i]=1;
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    cur[j]=2+prev[j-1];
                }
                else{
                    cur[j]=max(prev[j], cur[j-1]);
                }
            }
            prev=cur;
        }
        return prev[n-1];
    }
};