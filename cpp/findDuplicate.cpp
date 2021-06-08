/* 
 *
 * Given an array of integers nums containing n + 1 integers where each 
 * integer is in the range [1, n] inclusive.
 * 
 * There is only one repeated number in nums, return this repeated number.
 *
 */

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> set;
        
        for (int n : nums) {
            if (set.find(n) != set.end()) return n;
            set.insert(n);
        }
        
        return -1;
    }
};