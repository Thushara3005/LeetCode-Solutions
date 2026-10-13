class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int i: students){
            q.push(i);
        }

        int i=0, count=0;
        while(!q.empty() && count<q.size()){
            if(sandwiches[i]==q.front()){
                q.pop();
                i++;
                count=0;
            }
            else{
                int a=q.front();
                q.pop();
                q.push(a);
                count++;
            }
        }
        return count;


        // int c=0,s=0;
        // for(int i:students){
        //     if(i==0){
        //         c++;
        //     }
        //     s++;
        // }
        // for(int i: sandwiches){
        //     if(i==0){
        //         if(c==0){
        //             return c+s;  
        //         }
        //         c--;
        //     }
        //     else{
        //         if(s==0){
        //             return c+s;
        //         }
        //         s--;
        //     }
        // }
        // return 0;
    }
};