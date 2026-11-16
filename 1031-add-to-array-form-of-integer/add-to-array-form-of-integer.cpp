class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        int i=n-1;
        int prev=0;
        while(k!=0 || i>=0 || prev>0){
            int digit=k%10;
            if(i>=0){
                prev+=num[i];
            }
            prev+=digit;
            if(i>=0){
                num[i]=prev%10;
            }
            else{
                num.insert(num.begin(),prev%10);
            }
            // if(sum<9){
            //     num[i]=sum;
            //     prev=0;
            // }
            // else{
            //     num[i]=sum%10;
            //     prev=sum/10;
            // }
            prev/=10;
            k/=10;
            i--;
        }
        return num;
    }
};