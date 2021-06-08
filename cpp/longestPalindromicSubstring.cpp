/* 
 *
 * Given a string s, return the longest palindromic substring in s.
 *
 */

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return s; 
        
        int idx = 0, len = 1, i = 0;
        while (i < s.size()) {
            int start = i;
            int end = i;
            while (end < s.size() - 1 && s[end] == s[end+1]) {
                end++;
            }
            
            i = end + 1;
            
            while (start > 0 && end < s.size() - 1 && s[start-1] == s[end+1]) {
                start--, end++;
            }
            
            if (end - start + 1 > len) {
                len = end - start + 1;
                idx = start;
            }
        }
        
        return s.substr(idx, len);
    }