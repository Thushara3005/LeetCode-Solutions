class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int mx=*max_element(arr1.begin(), arr1.end());
        vector<int> count(mx+1,0);
        for(int i:arr1){
            count[i]++;
        }
        vector<int> ans;
        int index=0;
        for(int i:arr2){
            while(count[i]>0){
                ans.push_back(i);
                count[i]--;
            }
        }

        for(int i=0;i<=mx;i++){
            while(count[i]>0){
                ans.push_back(i);
                count[i]--;
            }
        }
        return ans;
    }
};