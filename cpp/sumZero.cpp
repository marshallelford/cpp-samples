/* 
 *
 * Given an integer n, return any array containing n unique integers such that 
 * they add up to 0.
 *
 */

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> output;
        
        if (n % 2 != 0) {
            output.push_back(0);
            n--;
        }
        
        // n - 2n = -n
        for (int i = 1; i <= n/2; i++) {
            output.push_back(i);
            output.push_back(i - (2*i));
        }
        
        return output;
    }
};