/* 
 *
 * Given an integer array nums, find a contiguous non-empty subarray within 
 * the array that has the largest product, and return the product.
 *
 * It is guaranteed that the answer will fit in a 32-bit integer.
 *
 * A subarray is a contiguous subsequence of the array.
 *
 */

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = nums[0], l = 0, r = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            l =  (l ? l : 1) * nums[i];
            r =  (r ? r : 1) * nums[nums.size() - 1 - i];
            res = max(res, max(l, r));
        }
        
        return res;
    }