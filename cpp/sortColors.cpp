/* 
 *
 * Given an array nums with n objects colored red, white, or blue, 
 * sort them in-place so that objects of the same color are adjacent, 
 * with the colors in the order red, white, and blue.
 * 
 * We will use the integers 0, 1, and 2 to represent the color red, 
 * white, and blue, respectively.
 *
 */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        //move 0's to the front, then move 1's to the front
        int front = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                swap(nums[front], nums[i]);
                front++;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                swap(nums[front], nums[i]);
                front++;
            }
        }
    }
};