class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int> ans(n);
        stack<int> stk;
        for(int i=n-1;i>=0;i--){
            while(!stk.empty() && stk.top()> prices[i]){
                stk.pop();
            }
            int discount=stk.empty()?0: stk.top();
            ans[i]=prices[i]- discount;
            stk.push(prices[i]);
        }
        return ans;
    }
};
