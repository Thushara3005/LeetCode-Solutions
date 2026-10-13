class Solution {
public:
    
    bool isPoss(vector<int> weights, int days, int mid){
        int used=1;
        int lead=0;

        for(int i:weights){
            if(lead+i>mid){
                used++;
                lead=i;
            }
            else{
                lead+=i;
            }
        }
        return used<=days;
    }


    int shipWithinDays(vector<int>& weights, int days) {
        int low =*max_element(weights.begin(),weights.end() );
        int high=accumulate(weights.begin(), weights.end(), 0);
        while(low<=high){
            int mid=(low+high)/2;
            if(isPoss(weights,days, mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};