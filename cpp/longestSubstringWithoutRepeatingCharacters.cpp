/* 
 *
 * Given a string s, find the length of the longest substring without repeating characters.
 *
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // sliding window
        // map of character appearances, start index of substring, end index of substring
        // characters are stored in the map with the latest index they appear, if a repeat appears, ensure it appears after the start index
        
        map<char, int> map;
        int maxSubstring = 0;
        
        for (int start = -1, end = 0; end < s.size(); end++) {
            char c = s[end];
            
            if (map.find(c) != map.end()) {
                // repeat character
                start = max(start, map[c]);
            }
            
            map[c] = end;
            maxSubstring = max(maxSubstring, end - start);
        }
        
        return maxSubstring;
    }
};