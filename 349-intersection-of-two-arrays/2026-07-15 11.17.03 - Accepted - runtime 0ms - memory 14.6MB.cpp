class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // set<int> ans;
        // sort(nums1.begin(), nums1.end());
        // sort(nums2.begin(), nums2.end());
        // int i=0,j=0;
        // while(i<nums1.size() && j<nums2.size()){
        //     if(nums1[i]==nums2[j]){
        //         ans.insert(nums1[i]);
        //         i++;
        //         j++;
        //     }
        //     else if(nums1[i]>nums2[j]){
        //         j++;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        // vector<int> p;
        // for(auto i: ans){
        //     p.push_back(i);
        // }
        // return p;

        // APProach 2 (optimal)
        unordered_set<int> s(nums1.begin(), nums1.end());
        unordered_set<int> ans;
        for(int i:nums2){
            if(s.count(i)){
                ans.insert(i);
            }
        }
        return vector<int> (ans.begin(), ans.end());
        
    }
};