// class MinStack {
//     private:
//     stack<int> stk;
//     long long mini;
// public:
//     MinStack() {
//         // stack<int> stk;
//         mini=100000000;
//     }
    
//     void push(int val) {
//         if(stk.empty()){
//             stk.push(val);
//             mini=val;
//         }
//         else{
//             if(val<mini){ 
//                 stk.push(2 * val - mini);
//                 mini=val;
//             }
//             else{
//                 stk.push(val);
//             }
//         }
//     }
    
//     void pop() {
//         if(stk.top()<mini){
//             mini=2*mini-stk.top();
//             stk.pop();
//         }
//         else{
//             stk.pop();
//         }
//     }
    
//     int top() {
//         if(stk.top()<mini){
//             return mini;
//         }
//         else{
//             return stk.top();
//         }
//     }
    
//     int getMin() {
//         return mini;
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */

class MinStack {
private:
    stack<long long> stk;   // store encoded values in long long
    long long mini;

public:
    MinStack() {
        mini = 100000000;
    }
    
    void push(int val) {
        if (stk.empty()) {
            stk.push(val);
            mini = val;
        }
        else {
            if (val < mini) {
                long long encoded = 2LL * val - mini;   // use long long
                stk.push(encoded);
                mini = val;
            }
            else {
                stk.push(val);
            }
        }
    }
    
    void pop() {
        if (stk.top() < mini) {
            mini = 2LL * mini - stk.top();  // long long safe
            stk.pop();
        }
        else {
            stk.pop();
        }
    }
    
    int top() {
        if (stk.top() < mini) {
            return (int)mini;
        }
        else {
            return (int)stk.top();
        }
    }
    
    int getMin() {
        return (int)mini;
    }
};
