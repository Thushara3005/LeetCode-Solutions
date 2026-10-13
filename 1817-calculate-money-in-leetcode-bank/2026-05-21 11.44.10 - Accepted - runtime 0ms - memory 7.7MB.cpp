class Solution {
public:
    int totalMoney(int n) {
        int total=0;
        int weekend=1;
        while(n>0){
            for(int i=0; i<7 && n>0;i++){
                total+=weekend+i;
                n--;
            }
            weekend++;
        }
        return total;
    }
};