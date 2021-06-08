/* 
 *
 * You are given a string allowed consisting of distinct characters and an array 
 * of strings words. A string is consistent if all characters in the string appear 
 * in the string allowed.
 * 
 * Return the number of consistent strings in the array words.
 *
 */

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> set;
        for (char c : allowed) set.insert(c);
        
        int count = 0;
        for (string s : words) {
            bool flag = true;
            
            for (char c : s) {
                if (set.find(c) == set.end()) {
                    flag = false;
                    break;
                }
            }
            
            if (flag) count++;
        }
        
        return count;
    }
};