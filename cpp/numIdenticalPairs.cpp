/* 
 *
 * Given an array of integers nums.
 * 
 * A pair (i,j) is called good if nums[i] == nums[j] and i < j.
 * 
 * Return the number of good pairs.
 *
 */

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int result = 0;
        map<int, int> count;
        
        for (int i : nums) {
            result += count[i]++;
        }
        
        return result;
    }
};