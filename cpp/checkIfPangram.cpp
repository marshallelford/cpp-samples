/* 
 *
 * A pangram is a sentence where every letter of the English alphabet appears 
 * at least once.
 *
 * Given a string sentence containing only lowercase English letters, 
 * return true if sentence is a pangram, or false otherwise.
 *
 */

class Solution {
public:
    bool checkIfPangram(string sentence) {
        int alphabet[26] = { 0 };
        
        for (char c : sentence) {
            alphabet[c - 97]++;
        }
        
        for (int i = 0; i < 26; i++) {
            if (alphabet[i] == 0) return false;
        }
        
        return true;
    }
};