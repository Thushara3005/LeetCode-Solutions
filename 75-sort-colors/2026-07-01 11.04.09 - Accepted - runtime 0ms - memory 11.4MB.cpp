class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        // int minEle;
        // for(int i=0;i<=n-2;i++){
        //     minEle=i;
        //     for(int j=i;j<=n-1;j++){
        //         if(nums[j]<nums[minEle]){
        //             minEle=j;
        //         }
        //     }
        //     int temp=nums[i];
        //     nums[i]=nums[minEle];
        //     nums[minEle]=temp;
        // }
        int low=0,mid=0,high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }

        }
    }
};