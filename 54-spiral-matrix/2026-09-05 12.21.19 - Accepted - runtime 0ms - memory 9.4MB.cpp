class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> row_d={0,1,0,-1};
        vector<int> col_d={1,0,-1,0};
        int i=0, j=0,d=0,c=0;
        while(c!=n*m){
            c++;
            ans.push_back(matrix[i][j]);
            matrix[i][j]=-1000;
            int row_k=i+row_d[d];
            int col_k=j+col_d[d];
            if(row_k<0 || row_k>=n || col_k<0 || col_k>=m|| matrix[row_k][col_k]==-1000){
                d=(d+1)%4;
            }
            i+=row_d[d];
            j+=col_d[d];
        }
        return ans;
    }
};