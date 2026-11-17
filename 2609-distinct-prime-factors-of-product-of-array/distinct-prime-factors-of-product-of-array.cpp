class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> s;
        for(int i:nums){
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    s.insert(j);
                    while(i%j==0){
                        i/=j;
                    }
                }
            }
            if(i>1){
                    s.insert(i);
                }
        }
        return s.size();
    }
};