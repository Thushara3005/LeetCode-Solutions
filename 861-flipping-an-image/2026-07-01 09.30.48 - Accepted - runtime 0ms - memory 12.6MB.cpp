class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto &row:image){
            int left=0;
            int right=image.size()-1;
            while(left<=right){
            int temp=row[left]^1;
            row[left]=row[right]^1;
            row[right]=temp;
            left++;
            right--;
        }
        }
        return image;
    }
};