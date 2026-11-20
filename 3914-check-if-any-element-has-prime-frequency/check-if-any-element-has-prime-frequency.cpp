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

    bool checkPrimeFrequency(vector<int>& nums) {
        vector<int> v(101,0);
        for(int i:nums){
            v[i]++;
        }
        for(int i=0;i<v.size();i++){
            if(isPrime(v[i])){
                return true;
            }
        }
        return false;
    }
};