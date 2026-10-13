class Solution{
public:
    long long countSubarrays(vector<int> &nums , long long K){
        int N = nums.size();

        vector<long long> P(N);
        P[0] = nums[0];
        for(int i = 1 ; i < N ; i++) P[i] = P[i - 1] + nums[i];

        long long subarrays = 0;

        for(int L = 0 ; L < N ; L++){
            int minR = L;
            int maxR = N - 1;

            int bestR = -1;

            while(minR <= maxR){
                int R = (minR + maxR) >> 1;

                long long sum = P[R] - (L == 0 ? 0 : P[L - 1]);
                long long length = R - L + 1;

                long long currScore = sum * length;

                if(currScore < K){
                    bestR = R;
                    minR = R + 1;
                }
                else{
                    maxR = R - 1;
                }
            }

            if(bestR != -1){
                int currSubarray = bestR - L + 1;
                subarrays += currSubarray;
            }
        }

        return subarrays;
    }
};
