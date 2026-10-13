class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        long long power=1;
        while(power<n){
            power=power*4;
        }
        return power==n;
    }
};