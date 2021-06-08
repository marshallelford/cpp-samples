/* 
 * 
 * Given an integer array nums, return true if any value appears at least twice 
 * in the array, and return false if every element is distinct.
 * 
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> set;
        for (int n : nums) {
            if (set.find(n) != set.end()) return true;
            set.insert(n);
        }
        return false;
    }
};