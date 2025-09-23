class MinStack {
    int arr[100000001];
    int minStack[10000001];
    int t;
    int s;
    int minval;
public:
    MinStack() {
        minval= INT_MAX;
        t=-1;
        s=-1;
    }
    
    void push(int val) {
        arr[++t] = val;
        if(s==-1 || minStack[s]>=val) minStack[++s]=val;
    }
    
    void pop() {
        if(t>=0){
            if(s>=0 && minStack[s]==arr[t]){
                s--;
            }
            t--;
        }
            
    }
    
    int top() {
        if (t >= 0) return arr[t];
        return -1;
    }
    
    int getMin() {
        if (s >= 0) return minStack[s];
        return INT_MAX;
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
