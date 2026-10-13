class Solution {
public:
    string reversePrefix(string word, char ch) {
        int k=-1;
        for(int j=0;j<word.length();j++){
            if(word[j]==ch){
                k=j;
                break;
            }
        }
        if (k != -1) {
            reverse(word.begin(), word.begin() + k + 1); 
            // ## here we reverse from 0 to k+1 means if k=2 k+1=3 from 0 to index 3 we reverse it .
        }
        return word;


        // int idx= word.find(ch);
        // if(idx!=string::npos){
        //     reverse(word.begin(), word.begin()+idx+1);
        // }
        // return word;

    }
};