/* 
 *
 * Given a string s, return the first non-repeating character in it and return its index. 
 * If it does not exist, return -1.
 *
 */

class Solution {
public:
    int firstUniqChar(string s) {
        // go through the string and determine the unique characters
        // go through again and return the first of the unique characters
        
        vector<int> notUnique;
        set<char> set;
        
        for (char c : s) {
            if (set.find(c) != set.end()) notUnique.push_back(c);
            else set.insert(c);
        }
        
        for (int i = 0; i < s.size(); i++) {
            if (find(notUnique.begin(), notUnique.end(), s[i]) == notUnique.end()) return i;
        }
        
        return -1;
    }