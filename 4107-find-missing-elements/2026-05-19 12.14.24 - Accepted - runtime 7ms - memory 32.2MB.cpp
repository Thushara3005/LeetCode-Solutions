class Solution {
public:
    
    bool binarySearch(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                return true;

            else if (nums[mid] < target)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return false;
    }

    vector<int> findMissingElements(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int mn = nums[0];
        int mx = nums.back();

        vector<int> ans;

        for (int x = mn; x <= mx; x++) {

            if (!binarySearch(nums, x)) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};