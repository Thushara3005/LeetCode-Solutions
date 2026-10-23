class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int even=0;
        int odd=0;
        int m=n*2;
        for(int i=0;i<m;i++){
            if(i%2==0){
                even+=i;
            }
            else{
                odd+=i;
            }
        }
        return __gcd(even,odd);
    }
};