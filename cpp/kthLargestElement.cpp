/* 
 *
 * Given an integer array nums and an integer k, 
 * return the kth largest element in the array.
 * 
 * Note that it is the kth largest element in the sorted order, 
 * not the kth distinct element.
 *
 */

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort, then return size - k
        sort(nums.begin(), nums.end());
        return nums[nums.size() -  k];
    }
};