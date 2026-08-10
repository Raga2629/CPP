class MinStack {
public:
    int mn=INT_MAX;
    stack<pair<int,int>> s;
    MinStack() {
       
    }

    void push(int value) {
        mn=min(mn,value);
        s.push({value,mn});   
    }
    
    void pop() {
        s.pop();
        if(s.empty()) mn=INT_MAX;
        else
        mn=s.top().second;
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return mn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */