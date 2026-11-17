class Solution {
public:
    bool isPrime(int n){
        if(n<2){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

    int numPrimeArrangements(int n) {
        const long long MOD = 1e9 + 7;
        int count=0;
        for(int i=2;i<=n;i++){
            if(isPrime(i)){
                count++;
            }
        }
        int notPrime=n-count;
        long long primeFact=1;
        for(int i=1;i<=count;i++){
            primeFact= (primeFact*i)%MOD;
        }
        long long notprimeFact=1;
        for(int j=1;j<=notPrime;j++){
            notprimeFact=(notprimeFact*j)%MOD;
        }
        return (primeFact*notprimeFact)%MOD;
    }
};




