/* 
 *
 * Given a non-empty array of decimal digits representing a non-negative integer, 
 * increment one to the integer.
 * 
 * The digits are stored such that the most significant digit is at the head of 
 * the list, and each element in the array contains a single digit.
 * 
 * You may assume the integer does not contain any leading zero, 
 * except the number 0 itself.
 *
 */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool done = false;
        int i = 1;
        
        while (!done) {
            if (digits[digits.size() - i] == 9) {
                if (digits.size() == i) {
                    digits[0] = 0;
                    digits.insert(digits.begin(), 1);
                    done = true;
                } else {
                    digits[digits.size() - i] = 0;
                    i++;   
                }
            } else {
                digits[digits.size() - i]++;
                done = true;
            }
        }

        return digits;
    }
};