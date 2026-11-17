class Solution {
public:
    int smallestValue(int n) {
        int sum=0;
        while(sum!=n){
            int num=n;
            int sum=0;
            for(int i=2;i*i<=num;i++){
                while(num%i==0){
                    sum+=i;
                    num/=i;
                }
            }
            if(num>1){
                sum+=num;
            }
            if(n==sum){
                return n;
            }
            n=sum;
        }
        return n;
    }
};