class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int> stk;
        int ans=-1;
        for(int i=0;i<n;++i){
            while(!stk.empty() && heights[stk.top()]>heights[i]){
                int x=heights[stk.top()];
                stk.pop();
                if(!stk.empty()){
                    ans= max(ans, (x*(i-stk.top()-1)));
                }
                else{
                    ans=max(ans,x*i);
                }
            }
            stk.push(i);
        }
        while(!stk.empty()){
            int x=heights[stk.top()];
            stk.pop();
            if(!stk.empty()){
                ans=max(ans, (x* (n-stk.top()-1)));
            }
            else{
                ans=max(ans, x*n);
            }
        }
        return ans;
    }
};