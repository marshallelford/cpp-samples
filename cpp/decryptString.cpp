/* 
 *
 * Given a string s formed by digits ('0' - '9') and '#' . 
 * We want to map s to English lowercase characters as follows:
 * 
 * Characters ('a' to 'i') are represented by ('1' to '9') respectively.
 * Characters ('j' to 'z') are represented by ('10#' to '26#') respectively. 
 * 
 * Return the string formed after mapping.
 *
 */

class Solution {
public:
    string freqAlphabets(string s) {
        string output = "";
        
        for (int i = 0; i < s.size(); i++) {
            if (i < s.size() - 2 && s[i+2] == '#') {
                // j-z
                output += ('j' + (s[i] - '1') * 10 + s[i + 1] - '0');
                i+=2;
            } else {
                // a-i
                output += (s[i] + 48);
            }
        }
    
        return output;
    }
};