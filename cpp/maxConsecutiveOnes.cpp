/* 
 *
 * Given a binary array nums, return the maximum number of consecutive 1's in the array.
 *
 */

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int output = 0;
        
        for (int n : nums) {
            if (n == 0) {
                output = max(count, output);
                count = 0;
            } else {
                count++;
            }
        }
        
        output = max(count, output);
        
        return output;
    }
};