/* 
 *
 * Given an integer array nums, find the contiguous subarray (containing at least 
 * one number) which has the largest sum and return its sum.
 *
 */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // brute force: find every subarray and every sum
        // start with the sum of the entire array (1), remove ints until we get the max. maybe do this by finding lowest ints and adjust subarray start/end?
        if (nums.size() == 0) return 0; 
        
        int ans = nums[0];
        int sum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            ans = max(sum, ans);
            sum = max(sum, 0);
        }
        
        return ans;
    }
};