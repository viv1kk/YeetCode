class MinStack {
    
    stack<long long>stk;
    long long mn;
public:
    MinStack() {
        mn = 0;
    }
    
    void push(int val) {
        if(stk.empty())
        {
            stk.push(val);
            mn = val;
        }
        else{
            if(val > mn) stk.push(val);
            else{
                stk.push((2*(long long)val)-mn);
                mn = val;
            }
        }
    }
    
    void pop() {
        if(!stk.empty())
        {
            if(stk.top() < mn) mn = (2*(long long)mn)-stk.top();
            stk.pop();
        }
    }
    
    int top() {
        if(!stk.empty() && stk.top() < mn) return mn;
        return stk.top();
    }
    
    int getMin() {
        if(stk.empty()) return INT_MIN;
        return mn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */