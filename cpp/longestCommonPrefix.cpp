/* 
 *
 * Write a function to find the longest common prefix string amongst an array of strings.
 * 
 * If there is no common prefix, return an empty string "".
 *
 */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
	/*

        // prefix means the beginning of the string, so option 1: define index = 0, 
	// check each character to see if they match, if yes add to new string, if no return
        if (strs.size() == 0) return "";

        string output = "";
        
        for (int i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i];
            
            for (string s : strs) {
                if (s[i] != c) return output;
            }
            
            output += c;
        }
        
        return output;
        
        */
        
        // same thing as above but faster
        string prefix = "";
        for(int idx=0; strs.size()>0; prefix+=strs[0][idx], idx++)
            for(int i=0; i<strs.size(); i++)
                if(idx >= strs[i].size() ||(i > 0 && strs[i][idx] != strs[i-1][idx]))
                    return prefix;
        return prefix;
    }
};