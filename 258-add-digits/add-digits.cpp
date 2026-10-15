class Solution {
public:
    int addDigits(int num) {
        int temp=num;
        int sum=0;
        while(temp!=0 || sum>9){
            if(temp==0){
                temp=sum;
                sum=0;
            }
            int digit=temp%10;
            sum+=digit;
            temp/=10;
        }
        return sum;
    }
};