class Solution {
public:
    bool isPerfectSquare(int num) {
        // int ans=sqrt(num);
        // if(ans*ans==num){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        if(num<2){
            return true;
        }
        int low=2,high=num/2;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long square=mid*mid;
            if(square==num){
                return true;
            }
            if(square<num){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};