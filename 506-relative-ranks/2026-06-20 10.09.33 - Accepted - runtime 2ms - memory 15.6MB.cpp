class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<string> ans(n);
        vector<pair<int,int>> rank;
        for(int i=0;i<n;i++){
            rank.push_back({score[i],i});
        }
        sort(rank.begin(), rank.end(), greater<pair<int,int>>());
        for(int i=0;i<n;i++){
            int k=rank[i].second;
            if(i==0){
                ans[k]="Gold Medal";
            }
            else if(i==1){
                ans[k]="Silver Medal";
            }
            else if(i==2){
                ans[k]="Bronze Medal";
            }
            else{
                ans[k]= to_string(i+1);
            }
        }
        return ans;
    }
};