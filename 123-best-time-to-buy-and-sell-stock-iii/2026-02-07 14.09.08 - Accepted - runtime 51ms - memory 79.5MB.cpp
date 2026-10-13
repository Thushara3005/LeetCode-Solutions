class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> front(2, vector<int>(3,0));
        vector<vector<int>> cur(2, vector<int>(3,0));
        for(int i=n-1;i>=0;i--){
            for(int trans=1;trans<=2;trans++){
                cur[0][trans]=max(prices[i]+ front[1][trans-1], front[0][trans]);
                cur[1][trans]=max(-prices[i]+ front[0][trans], front[1][trans]);
            }
            front=cur;
        }
        return cur[1][2];
    }
};