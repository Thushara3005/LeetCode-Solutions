class Solution {
public:

    int number_bouquet(vector<int> &arr, int n, int k, int target){
        int count=0,bouquet=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=target){
                count++;
                if(count==k){
                    bouquet++;
                    count=0;
                }
            }
            else count=0;
        }
        return bouquet;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long totalFlowers = 1LL * m * k;

        if (totalFlowers > bloomDay.size())
            return -1;
        int n = bloomDay.size();
        int low=*min_element(bloomDay.begin(), bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            if(number_bouquet(bloomDay, n, k, mid) >= m){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};