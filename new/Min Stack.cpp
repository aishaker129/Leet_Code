class MinStack {
public:
    vector<int> st;
    vector<int> mn;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.size()==0 || mn.back()>=val){
            mn.push_back(val);
        }

        st.push_back(val);
    }
    
    void pop() {
        if(st.back()==mn.back()){
            mn.pop_back();
        }
        st.pop_back();

    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
       return  mn.back();
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