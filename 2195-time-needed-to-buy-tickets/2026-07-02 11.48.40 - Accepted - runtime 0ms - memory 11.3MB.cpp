class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        queue<int> q;
        int time = 0;
        for (int i=0;i<n;i++) {
            q.push(i);
        }
        while (!q.empty()) {
            int val = q.front();
            q.pop();
            tickets[val]--;
            time++;
            if (tickets[val] >0) {
                q.push(val);
            }
            if(val==k && tickets[val]==0){
                return time;
            }
        }
        return time;
    }
};