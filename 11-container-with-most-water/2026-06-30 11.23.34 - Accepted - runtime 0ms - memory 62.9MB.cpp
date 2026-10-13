class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int low=0, high=n-1;
        int maxheight=0;
        while(low<high){
            int h=min(height[low],height[high]);
            int w=high-low;
            maxheight=max(maxheight, h*w);
            if(height[low]<height[high]){
                low++;
            }
            else{
                high--;
            }
        }
        return maxheight;
    }
};