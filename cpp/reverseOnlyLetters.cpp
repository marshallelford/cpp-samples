/* 
 *
 * Given a string s, return the "reversed" string where all characters that are 
 * not a letter stay in the same place, and all letters reverse their positions.
 *
 */

class Solution {
public:
    string reverseOnlyLetters(string S) {
        stack<char> s;
        
        for (char c : S) { 
            // if we have a letter, push it to the stack
            if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) s.push(c);
        }
        
        for (int i = 0; i < S.size(); i++) {
            // if we have a letter, replace it with the top of the stack
            if ((S[i] >= 65 && S[i] <= 90) || (S[i] >= 97 && S[i] <= 122)) {
                S.replace(i, 1, std::string(1, s.top()));
                s.pop();
            }
        }
        
        return S;
    }
};