/* 
 *
 * Given an integer array nums sorted in non-decreasing order, 
 * return an array of the squares of each number sorted in non-decreasing order.
 *
 */

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int start = 0;
        int end = nums.size() - 1;

        for (int i = nums.size() - 1; i >= 0; i--) {
            if (abs(nums[start]) > abs(nums[end])) {
                res[i] = nums[start] * nums[start++];
            } else {
                res[i] = nums[end] * nums[end--];
            }
        }
        
        return res;
    }
};