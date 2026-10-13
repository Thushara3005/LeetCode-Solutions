class Solution {
public:
    
    int mergeSort(vector<long long> &nums , int left, int right, int lower, int upper){
        if(left>=right){
            return 0;
        }
        int mid=(left+right)/2;
        int count=0;
        count+=mergeSort(nums, left, mid, lower, upper);
        count+=mergeSort(nums, mid+1, right, lower, upper);
        int i=mid+1, j=mid+1;
        for(int k=left;k<=mid;k++){
            while (i <= right && nums[i] - nums[k] < lower)
                i++;

            while (j <= right && nums[j] - nums[k] <= upper)
                j++;

            count +=(j - i);
        }


        int l=left, r=mid+1;

        vector<long long> temp;

        while(l<=mid && r<=right){
            if(nums[l]<=nums[r]){
                temp.push_back(nums[l]);
                l++;
            }
            else{
                temp.push_back(nums[r]);
                r++;
            }
        }
        while(l<=mid){
            temp.push_back(nums[l]);
            l++;
        }
        while(r<=right){
            temp.push_back(nums[r]);
            r++;
        }
        for (int k = 0; k < temp.size(); k++) {
            nums[left + k] = temp[k];
        }
        return count;
    }
    


    int countRangeSum(vector<int>& nums, int lower, int upper) {
        vector<long long> prefix(nums.size()+1, 0);
        for(int i=0;i<nums.size();i++){
            prefix[i+1]=prefix[i]+nums[i];
        }
        return mergeSort(prefix, 0, prefix.size()-1, lower, upper);
        
    }
    
};