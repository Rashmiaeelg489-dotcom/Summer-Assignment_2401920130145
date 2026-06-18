#include<string>
#include<stack>
using namespace std;

class MinStack {
public:
    stack<int>s;
    stack<int>s1;

    MinStack() {        
    }
    void push(int value)
    {
      s.push(value);
      if(s1.empty())
       s1.push(value);
      else
        s1.push(min(s1.top(),value));   
    }
    void pop() 
    {
       s.pop();
       s1.pop();
    }
    
    int top() 
    {
        return s.top();
    }
    
    int getMin() 
    {
        return s1.top();
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