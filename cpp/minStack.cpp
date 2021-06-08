/* 
 *
 * Design a stack that supports push, pop, top, and retrieving the 
 * minimum element in constant time.
 * 
 * Implement the MinStack class:
 * 
 * MinStack() initializes the stack object.
 * void push(val) pushes the element val onto the stack.
 * void pop() removes the element on the top of the stack.
 * int top() gets the top element of the stack.
 * int getMin() retrieves the minimum element in the stack.
 *
 */

class MinStack {
private:
    vector<int> s;
public:
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int val) {
        s.push_back(val);
    }
    
    void pop() {
        s.pop_back();
    }
    
    int top() {
        return s.back();
    }
    
    int getMin() {
        int min = INT_MAX;
        for (int i : s) {
            if (i < min) min = i;
        }
        return min;
    }
};