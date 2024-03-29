/* 
 *
 * A valid parentheses string is either empty (""), "(" + A + ")", or A + B, 
 * where A and B are valid parentheses strings, and + represents string concatenation.  
 * For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.
 * 
 * A valid parentheses string s is primitive if it is nonempty, and there does not 
 * exist a way to split it into s = A+B, with A and B nonempty valid parentheses strings.
 * 
 * Given a valid parentheses string s, consider its primitive decomposition: 
 * s = P_1 + P_2 + ... + P_k, where P_i are primitive valid parentheses strings.
 * 
 * Return s after removing the outermost parentheses of every primitive string in 
 * the primitive decomposition of S.
 *
 */

class Solution {
public:
    string removeOuterParentheses(string S) {
        //go through the string character by character
        //maintain a count throughout which represents the number of parentheses you've seen
        //for example if you see ( then count++ and ) then count--
        //whenever count=0 for a ( or count=1 for a ), remove the parentheses from the string
        int count = 0;
        string output = "";
        
        for (char c : S) {
            if (c == '(') {
                if (count != 0) 
                    output += c;     
                count++;
            } else if (c == ')') {
                if (count != 1) 
                    output += c;
                count--;
            } 
        }
        
        return output;
    }
};