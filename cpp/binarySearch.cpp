/* 
 *
 * Given an array of integers nums which is sorted in ascending order, 
 * and an integer target, write a function to search target in nums. 
 * If target exists, then return its index. Otherwise, return -1.
 *
 */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid;
        int start = 0;
        int end = nums.size() - 1;
        
        while (start <= end) {
          mid = start + (end - start) / 2;
          if (nums[mid] == target) return mid;
          if (target < nums[mid]) end = mid - 1;
          else start = mid + 1;
        }
        
        return -1;
    }
};