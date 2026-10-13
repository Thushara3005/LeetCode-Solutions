class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need, window;
        for(auto i:t){
            need[i]++;
        }
        int required=need.size(), formed=0;
        int left=0, ans=INT_MAX, start=0;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            window[ch]++;
            if(need.count(ch) && window[ch]==need[ch]){
                formed++;
            }
            while(left<=i && formed==required){
                if(i-left+1<ans){
                    ans=i-left+1;
                    start=left;
                }
                char c=s[left];
                window[c]--;
                if(need.count(c) && window[c]<need[c]){
                    formed--;
                }
                left++;
            }
        }
        if(ans==INT_MAX){
            return "";
        }
        else{
            return s.substr(start,ans);
        }
    }
};