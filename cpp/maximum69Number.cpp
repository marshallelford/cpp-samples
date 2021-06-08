/* 
 *
 * Given a positive integer num consisting only of digits 6 and 9.
 * 
 * Return the maximum number you can get by changing at most one digit 
 * (6 becomes 9, and 9 becomes 6).
 *
 */

class Solution {
public:
    int maximum69Number (int num) {
        int max = num;
        int copy = num;
        
        for (int i = 0; i < trunc(log10(num)) + 1; i++) {
            if (copy % 10 == 6) 
                max = num + (3*pow(10, i));
            copy /= 10;
        }
        
        return max;
    }
};