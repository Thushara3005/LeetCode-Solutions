class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int minEle;
        for(int i=0;i<=n-2;i++){
            minEle=i;
            for(int j=i;j<=n-1;j++){
                if(nums[j]<nums[minEle]){
                    minEle=j;
                }
            }
            int temp=nums[i];
            nums[i]=nums[minEle];
            nums[minEle]=temp;
        }
    }
};