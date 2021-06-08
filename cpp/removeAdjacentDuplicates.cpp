/* 
 *
 * You are given a string s and an integer k, a k duplicate removal consists 
 * of choosing k adjacent and equal letters from s and removing them, causing 
 * the left and the right side of the deleted substring to concatenate together.
 * 
 * We repeatedly make k duplicate removals on s until we no longer can.
 * 
 * Return the final string after all such duplicate removals have been made. 
 * It is guaranteed that the answer is unique.
 *
 */

class Solution {
public:
    string removeAdjacentDuplicates(string s, int k) {
        vector<pair<char, int>> stack;
        
        for (char c : s) {
            if (stack.empty() || stack.back().first != c) stack.push_back({c, 0});
            if (++stack.back().second == k) stack.pop_back();
        }
        
        string output = "";
        for (pair<char, int> p : stack) {
            output += string(p.second, p.first);
        }
        
        return output;
    }
};