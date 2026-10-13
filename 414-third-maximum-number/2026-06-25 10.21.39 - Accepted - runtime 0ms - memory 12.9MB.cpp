class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first=LONG_MIN;
        long long second=LONG_MIN;
        long long third=LONG_MIN;
        for(int i: nums){
            if(i==first || i==second || i==third){
                continue;
            }
            if(i>first){
                third=second;
                second=first;
                first=i;
            }
            else if(i>second){
                third=second;
                second=i;
            }
            else if(i>third){
                third=i;
            }
        }
        return ((third==LONG_MIN) ? first: third);
    }
};