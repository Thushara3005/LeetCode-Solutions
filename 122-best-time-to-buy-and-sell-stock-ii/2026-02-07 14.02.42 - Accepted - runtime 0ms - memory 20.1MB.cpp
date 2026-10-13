class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> front(2,0);
        vector<int> cur(2);
        for(int i=n-1;i>=0;i--){
            cur[0]=max(prices[i]+ front[1], front[0]);
            cur[1]= max(-prices[i]+ front[0], front[1]);
            front=cur;
        }
        return cur[1];
    }
};