/* 
 *
 * Given a non-empty array of integers nums, every element appears twice except for one. 
 * Find that single one.
 * 
 * Implement a solution with a linear runtime complexity and constant extra space.
 *
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0;
        for (int i : nums) {
          a ^= i;
        }
        return a;
    }
};