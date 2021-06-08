/* 
 *
 * Given an integer array nums, move all 0's to the end of it while 
 * maintaining the relative order of the non-zero elements.
 *
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> output;
        int count = 0;
        
        for (int n : nums) {
            if (n == 0) count++;
            else output.push_back(n);
        }
        
        for (int i = 0; i < count; i++) output.push_back(0);
        
        nums = output;
    }
};