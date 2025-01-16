class MyStack {
public:
    queue<int> stack;
    MyStack() {
        
    }
    
    void push(int x) {
        stack.push(x);
        int n = stack.size();
        for(int i=0; i<n-1; i++){
            stack.push(stack.front());
            stack.pop();
        }
    }
    
    int pop() {
        int a = stack.front();
        stack.pop();
        return a;
    }
    
    int top() {
        return stack.front();
    }
    
    bool empty() {
        return stack.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */