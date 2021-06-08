/* 
 *
 * Given a string columnTitle that represents the column title as appearing 
 * in an Excel sheet, return its corresponding column number.
 *
 * For example:
 * 
 * A -> 1
 * B -> 2
 * C -> 3
 * ...
 * Z -> 26
 * AA -> 27
 * AB -> 28 
 * 
 */

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sol = 0;
        for (int i = 0; i < columnTitle.size(); i++) {
            sol *= 26;
            sol += (columnTitle[i] - 64);
        }
        return sol;
    }
};