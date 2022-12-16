// ============================= 2020_12_16 ====================================
// queue:FIFO => stack:FILO
// create 2 queue, one for inStack(), one for outStack()
// when there are elements in the outstack, the ele on top is the first ele to pop
// if no ele in outStack, we push elements from inStack to outStack in reverse order
// we could use push() and pop() in queue
// =============================================================================

class MyQueue {
    private:
    stack<int> inStack, outStack;

    void in2out(){
        while(!inStack.empty()){
            outStack.push(inStack.top());
            inStack.pop();
        }
    }

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        inStack.push(x);
    }
    
    int pop() {
        if(outStack.empty()){
            in2out();
        }
        int x = outStack.top();
        outStack.pop();
        return x;
    }
    
    int peek() {
        if(outStack.empty()){
            in2out();
        }
        return outStack.top();
    }
    
    bool empty() {
        return outStack.empty() && inStack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */