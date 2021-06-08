/* 
 *
 * Given a string s, the power of the string is the maximum length of a 
 * non-empty substring that contains only one unique character.
 * 
 * Return the power of the string.
 *
 */

class Solution {
public:
    int maxPower(string s) {
        vector<pair<char, int>> stack;
        int maxSubstring = 0;
        
        for (char c : s) {
            if (stack.empty() || stack.back().first != c) stack.push_back({c, 1}); 
            else stack.back().second++;
            maxSubstring = max(maxSubstring, stack.back().second);
        }
        
        return maxSubstring;
    }
};