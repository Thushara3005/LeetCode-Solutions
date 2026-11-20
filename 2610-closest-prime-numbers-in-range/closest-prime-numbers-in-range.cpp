class Solution {
public:
    bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<int> prime;
        for(int i=left;i<=right;i++){
            if(isPrime(i)){
                prime.push_back(i);
            }
        }
        vector<int> ans(2,-1);
        int prev=INT_MAX, curr=0;
        for(int i=0;i+1<prime.size();i++){
            curr=prime[i+1]-prime[i];
            if(curr<prev){
                ans[0]=prime[i];
                ans[1]=prime[i+1];
                prev=curr;
            }
        }
        return ans;
    }
};