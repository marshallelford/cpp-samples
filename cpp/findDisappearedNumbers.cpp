/* 
 *
 * Given an array nums of n integers where nums[i] is in the range [1, n], 
 * return an array of all the integers in the range [1, n] that do not appear in nums
 *
 */

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // go through and create a set, then find each i in set
        set<int> set;
        vector<int> o;
        
        for (int n : nums) {
            set.insert(n);
        }
        
        for (int i = 1; i <= nums.size(); i++) {
            if (set.find(i) == set.end()) {
                o.push_back(i);
            }
        }
        
        return o;
    }