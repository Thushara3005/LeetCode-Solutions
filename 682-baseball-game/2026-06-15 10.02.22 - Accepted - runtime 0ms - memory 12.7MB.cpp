class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(string i:operations){
            if(i=="+"){
                int a=st.top();
                st.pop();
                int stop=a+ st.top();
                st.push(a);
                st.push(stop);
            }
            else if(i=="C"){
                st.pop();
            }
            else if(i=="D"){
                int result=st.top()* 2;
                st.push(result);
            }
            else {
                st.push(stoi(i));
            }
        }
        int ans=0;
        if(st.empty()){
            return 0;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};