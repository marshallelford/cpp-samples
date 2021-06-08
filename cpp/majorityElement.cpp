/* 
 *
 * Given an array nums of size n, return the majority element.
 * 
 * The majority element is the element that appears more than [n / 2] times. 
 * You may assume that the majority element always exists in the array.
 *
 */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() / 2;
        map<int, int> map;
        
        for (int i = 0; i < nums.size(); i++) {
            if (map[nums[i]] >= n) return nums[i];
            else map[nums[i]]++;
        }
        
        return -1;
    }
};