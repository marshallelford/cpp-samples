/* 
 *
 * Given a string containing digits from 2-9 inclusive, return all possible letter 
 * combinations that the number could represent. Return the answer in any order.
 *
 */

class Solution {
private:
    vector<string> pad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> res;
        res.push_back("");
        
        for (int digit : digits) {
            vector<string> temp;
            for (char c : pad[digit - '0']) {
                for (string s : res) {
                    temp.push_back(s + c);
                }
            }
            res = temp;
        }
        
        return res;
    }
};