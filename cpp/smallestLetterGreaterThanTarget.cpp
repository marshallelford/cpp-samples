/* 
 *
 * Given a characters array letters that is sorted in non-decreasing order and a 
 * character target, return the smallest character in the array that is larger than target.
 * 
 * Note that the letters wrap around.
 *
 */

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int lo = 0, hi = letters.size();
        while (lo < hi) {
            int mi = lo + (hi - lo) / 2;
            if (letters[mi] <= target) lo = mi + 1;
            else hi = mi;
        }
        return letters[lo % letters.size()];
    }
};