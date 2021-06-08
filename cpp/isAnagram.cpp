/* 
 *
 * Given two strings s and t, return true if t is an anagram of s, and false otherwise.
 *
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        int counter[26] = { 0 };
        
        for (int i = 0; i < s.size(); i++) {
            counter[s[i] - 'a']++;
            counter[t[i] - 'a']--;
        }
        
        for (int i : counter) {
            if (i != 0) return false;
        }
        
        return true;
    }
};