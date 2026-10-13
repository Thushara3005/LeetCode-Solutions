class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int k=nums[i];
            int c=0;
            while(k!=0){
                int digit=k%10;
                k/=10;
                c++;
            }
            if(c%2==0){
                count++;
            }
        }
        return count;
    }
};