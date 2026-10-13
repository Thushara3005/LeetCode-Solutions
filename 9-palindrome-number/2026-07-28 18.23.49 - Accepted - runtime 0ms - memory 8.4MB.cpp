class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long long sum=0;
        while(temp!=0){
            int digit=temp%10;
            temp/=10;
            sum=sum*10+digit;
        }
        return (x>=0)?(sum==x): false;
    }
};