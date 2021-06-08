/* 
 *
 * Given two string arrays word1 and word2, return true if the two arrays represent 
 * the same string, and false otherwise.
 * 
 * A string is represented by an array if the array elements concatenated in order 
 * forms the string.
 *
 */

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        /* method 1: construct the arrays individually, then compare (not the best)
        string s1;
        for (string s : word1) {
            s1 += s;
        }
        
        string s2;
        for (string s : word2) {
            s2 += s;
        }
        
        if (s1 == s2) return true;
        else return false;
        */
        
        // method 2: go through each character individually, if any don't match or the lengths are different, return false
        int i = 0, j = 0;
        int iind = 0;
        int jind = 0;
        
        while (i < word1.size() and j < word2.size()) {
            
            if (word1[i][iind] != word2[j][jind]) {
                return false;
            }
            
            iind++;
            jind++;
            
            if (iind >= word1[i].size()) {
                iind = 0;
                i++;
            }
            
            if (jind >= word2[j].size()) {
                jind = 0;
                j++;
            }
            
        }
        
        if (i < word1.size() || j < word2.size()) return false;
        return true;
    }
};