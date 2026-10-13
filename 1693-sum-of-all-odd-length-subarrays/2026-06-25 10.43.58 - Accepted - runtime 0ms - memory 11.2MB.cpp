class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        // vector<int> result;
        // int n=arr.size();
        // int count=0;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         if(count%2!=0){
        //             count++;
        //             sum+=arr[j];
        //             result.push_back(sum);
        //         }
        //         else if(count%2==0){
        //             count++;
        //         }
        //     }
        // }
        // int ans;
        // for(int i=0;i<result.size();i++){
        //     ans+=result[i];
        // }
        // return ans;
        int ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=arr[j];
                int len=j-i+1;
                if(len%2==1){
                    ans+=sum;
                }
            }
        }
        return ans;
    }
};