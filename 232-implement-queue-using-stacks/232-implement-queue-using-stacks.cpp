class MyQueue {
    // 1 3 4
    stack<int> input, output;
public:
    // 3 4
    void push(int x)
    {
        input.push(x);
    }

    int pop(void) 
    {
        int dummy = peek();
        output.pop();
        return dummy;
    }
    
    // 1
    int peek(void)
    {
        if (output.empty())
            while (input.size())
                output.push(input.top()), input.pop();
        return output.top();
    }

    bool empty(void)
    {
        return input.empty() && output.empty();
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