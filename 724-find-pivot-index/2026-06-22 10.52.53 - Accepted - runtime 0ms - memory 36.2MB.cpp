// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> prefix(n);
//         prefix[0]=nums[0];
//         for(int i=1;i<n;i++){
//             prefix[i]=prefix[i-1]+prefix[i];
//         }
//         for(int i=0;i<n;i++){
//             int left,right;
//             left= (i==0) ? 0: prefix[i-1];
//             right=prefix[n-1]- prefix[i];
//             cout<<right;
//             if(left==right){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefix(n);
        prefix[0] = nums[0];

        for(int i=1;i<n;i++)
            prefix[i] = prefix[i-1] + nums[i];

        for(int i=0;i<n;i++) {
            int left = (i==0) ? 0 : prefix[i-1];
            int right = prefix[n-1] - prefix[i];

            if(left == right)
                return i;
        }

        return -1;
    }
};