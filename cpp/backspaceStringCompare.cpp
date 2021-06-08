/* 
 *
 * Given two strings s and t, return true if they are equal when both are 
 * typed into empty text editors. '#' means a backspace character.
 * 
 * Note that after backspacing an empty text, the text will continue empty.
 *
 */

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stack;
        string s1, s2;
        
        for (char c : s) {
            if (c == '#') {
                if (!stack.empty()) stack.pop();
            } else stack.push(c);
        }
        
        while (!stack.empty()) {
            s1.push_back(stack.top());
            stack.pop();
        }
        
        for (char c : t) {
            if (c == '#') {
                if (!stack.empty()) stack.pop();
            } else stack.push(c);
        }
        
        while (!stack.empty()) {
            s2.push_back(stack.top());
            stack.pop();
        }
        
        return s1 == s2 ? true : false;
    }
};