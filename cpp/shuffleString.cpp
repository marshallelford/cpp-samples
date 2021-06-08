/* 
 *
 * Given a string s and an integer array indices of the same length.
 * 
 * The string s will be shuffled such that the character at the ith position 
 * moves to indices[i] in the shuffled string.
 * 
 * Return the shuffled string.
 *
 */

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string output;
        
        for (int i = 0; i < s.size(); i++) {
            int index = 0;
            while (indices[index] != i) index++;
            output += s[index];
        }
        
        return output;
    }
};