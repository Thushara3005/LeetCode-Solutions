class Solution {
public:
    vector<int> closestPrimes(int left, int right) {

        vector<bool> prime(right + 1, true);

        if (right >= 0) prime[0] = false;
        if (right >= 1) prime[1] = false;

        for (int i = 2; i * i <= right; i++) {
            if (prime[i]) {
                for (int j = i * i; j <= right; j += i) {
                    prime[j] = false;
                }
            }
        }

        vector<int> temp;
        for(int i=left;i<=right;i++){
            if(prime[i]){
                temp.push_back(i);
            }
        }
        int n=temp.size();
        vector<int> ans(2, -1);
        int prev=INT_MAX, curr=0;
        for(int i=0;i<n-1;i++){
            curr=temp[i+1]-temp[i];
            if(curr<prev){
                ans[0]=temp[i];
                ans[1]=temp[i+1];
                prev=curr;
            }
        }
        return ans;
    }
};