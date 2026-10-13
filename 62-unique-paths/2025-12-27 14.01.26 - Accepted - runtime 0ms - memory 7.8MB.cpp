class Solution {
public:
    int uniquePaths(int m, int n) {
        int p[n];
        int c[n];
        c[0]=1;
        for(int i=0;i<n;i++){
            p[i]=1;
        }
        for(int i=1;i<=m-1;i++){
            for(int j=1;j<=n-1;j++){
                c[j]=c[j-1]+p[j];
            }
            for(int j=1;j<=n-1;j++){
                p[j]=c[j];
            }
        }
        return p[n-1];
    }
};