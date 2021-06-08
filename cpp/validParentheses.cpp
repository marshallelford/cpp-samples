/* 
 *
 * Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', 
 * determine if the input string is valid.
 * 
 * An input string is valid if:
 * 
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 *
 */

class Solution {
public:
    bool isValid(string s) {
        stack<int> stack;
        stack.push('t');
        stack.push('t');
        
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else if (c == ')') {
                if (stack.top() != '(') return false;
                stack.pop();
            } else if (c == '}') {
                if (stack.top() != '{') return false;
                stack.pop();
            } else if (c == ']') {
                if (stack.top() != '[') return false;
                stack.pop();
            } 
        }
        
        if(stack.size() == 2) return true;
        else return false;
    }
};