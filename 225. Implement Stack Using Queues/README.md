# Implement Stack using Queues

使用队列实现栈，可以使用两个队列或者一个队列，当然使用一个队列最好啦。因此我们在这里就使用一个队列来实现栈。

在刚开始时，我们可以想到一个队列实现栈的时候，为了保证FILO，需要将队列pop的元素再次压入队列，直到第一个元素，将其pop不再重新压入，这样就完成了栈的pop，而栈的top多一步重新压入的过程， 就完成了队列实现栈，代码如下：
```c++
    class MyStack {
    public:
        queue<int> myqueue;
        /** Initialize your data structure here. */
        MyStack() {
            
        }
        
        /** Push element x onto stack. */
        void push(int x) {
            myqueue.push(x);
        }
    
        int popqueue(int step) {
            int ret;
            if (myqueue.size() == step) {
                ret = myqueue.front();
                myqueue.pop();
                return ret;
            }
            int data = myqueue.front();
            myqueue.pop();
            myqueue.push(data);
            ret = popqueue(step + 1);
            return ret;
        }
        
        /** Removes the element on top of the stack and returns that element. */
        int pop() {
            return popqueue(1);
        }
        
        /** Get the top element. */
        int top() {
            int ret = popqueue(1);
            myqueue.push(ret);
            return ret;
        }
        
        /** Returns whether the stack is empty. */
        bool empty() {
            return myqueue.empty();
        }
    };
```
当然啦，上面是在pop或者top的时候调整数据的顺序，来实现栈的FILO，那么我们能不能在输入的时候就讲数据的顺序调整好呢，当然可以。我们只需要的push的时候将顺序调整好，就同样可以实现队列变栈。
```c++
    class MyStack {
    public:
        queue<int> myqueue;
        /** Initialize your data structure here. */
        MyStack() {
            
        }
        
        /** Push element x onto stack. */
        void push(int x) {
            myqueue.push(x);
        }
    
        int popqueue(int step) {
            int ret;
            if (myqueue.size() == step) {
                ret = myqueue.front();
                myqueue.pop();
                return ret;
            }
            int data = myqueue.front();
            myqueue.pop();
            myqueue.push(data);
            ret = popqueue(step + 1);
            return ret;
        }
        
        /** Removes the element on top of the stack and returns that element. */
        int pop() {
            return popqueue(1);
        }
        
        /** Get the top element. */
        int top() {
            int ret = popqueue(1);
            myqueue.push(ret);
            return ret;
        }
        
        /** Returns whether the stack is empty. */
        bool empty() {
            return myqueue.empty();
        }
    };
```