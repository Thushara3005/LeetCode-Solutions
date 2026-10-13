// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         int low=0,high=n;
//         if(n==1){
//             return true;
//         }
//         while(low<=high){
//             int mid=(low+high)/2;
//             if(2*(mid*2)==n){
//                 return true;
//             }
//             if(2*(mid*mid)>n){
//                 low=mid+1;
//             }
//             else{
//                 high=mid-1;
//             }
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) {
            return false;
        }

        long long power = 1;

        while(power < n) {
            power = power * 2;
        }

        return power == n;
    }
};