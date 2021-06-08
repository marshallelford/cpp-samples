/* 
 *
 * We are given two strings, s and goal.
 * 
 * A shift on s consists of taking string s and moving the leftmost character 
 * to the rightmost position. For example, if s = 'abcde', then it will be 'bcdea' 
 * after one shift on s. Return true if and only if s can become goal after some 
 * number of shifts on s.
 *
 */

class Solution {
public:
    bool rotateString(string A, string B) {
        if (A.size() != B.size()) return false;
        
        A += A;
        if (A.find(B) != string::npos) return true;
        return false;
    }
};