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
    vector<int> closestPrimes(int left, int right) {
        vector<int> temp;
        for(int i=left;i<=right;i++){
            if(isPrime(i)){
                temp.push_back(i);
            }
        }
        int n=temp.size();
        vector<int> ans(2, -1);
        int prev=INT_MAX, curr=0;
        for(int i=0;i<n-1;i++){
            curr=temp[i+1]-temp[i];
            if(curr<prev){
                ans[0]=temp[i];
                ans[1]=temp[i+1];
                prev=curr;
            }
        }
        return ans;
    }
};