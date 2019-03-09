# Implement-queue-using-stacks

在使用栈来使用队列时，我们需要用到两个栈，一个栈用作输入，一个栈用作输出。

在数据流入队列时，首先将数据放入输入栈，在碰到无论是peek操作还是pop操作，我们都需要判断一下输出栈是否为空，如果输出栈为空则需要将输入栈所有的元素全部弹出压入输出栈，这样就形成了队列的FIFO，代码如下：
```c++
    class MyQueue {
    public:
        /** Initialize your data structure here. */
        stack<int> inputStack, outputStack;
        MyQueue() {
            
        }
        
        /** Push element x to the back of queue. */
        void push(int x) {
            inputStack.push(x);
        }
        
        /** Removes the element from in front of queue and returns that element. */
        int pop() {
            prepareOutputstack();
            int tmp = outputStack.top();
            outputStack.pop();
            return tmp;
        }
        
        /** Get the front element. */
        int peek() {
            prepareOutputstack();
            return outputStack.top();
        }
        
        /** Returns whether the queue is empty. */
        bool empty() {
            return !inputStack.size() && !outputStack.size();
        }
    protected:
        inline void prepareOutputstack() {
            if (outputStack.empty())
                while (inputStack.size()) {
                    outputStack.push(inputStack.top());
                    inputStack.pop();
                }
        }
    };
```