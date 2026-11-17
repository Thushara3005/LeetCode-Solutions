class Solution {
public:
    vector<bool> isPrime(int n){
        vector<bool> prime(n+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i*i<=n;i++){
            if(prime[i]){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=false;
                }
            }
        }
        return prime;
    }

    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> ans;
        vector<bool> primes=isPrime(n);
        vector<int> prime;
        for(int i=0;i<=n;i++){
            if(primes[i]){
                prime.push_back(i);
            }
        }
        int i=0, j=prime.size()-1;
        while(i<=j){
            int sum=prime[i]+prime[j];
            if(sum==n){
                ans.push_back({prime[i], prime[j]});
                i++;
                j--;
            }
            else if(sum<n){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};





