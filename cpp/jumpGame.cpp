/* 
 *
 * Given an array of non-negative integers nums, you are initially positioned at 
 * the first index of the array.
 * 
 * Each element in the array represents your maximum jump length at that position.
 * 
 * Determine if you are able to reach the last index.
 *
 */

class Solution {
public:
    bool canJump(vector<int>& nums) {
        /* go through the array backwards, and if an int is 0, check if the numbers before it are able to get passed it
        if (nums.size() <= 1) return true;
        
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] == 0) {
                // uh oh, need to be able to get passed this
                // need (j) + nums[j] > i && j >= 0
                bool flag = false;
                for (int j = i - 1; j >= 0; j--) {
                    if (j + nums[j] > i) {
                        flag = true;
                        break;
                    }
                }
                if (!flag) return false;
            }
        }
        
        return true;
        */
        
        // greedy algorithm
        int lastPos = nums.size() - 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (i + nums[i] >= lastPos) {
                lastPos = i;
            }
        }
        return lastPos == 0;
    }
};