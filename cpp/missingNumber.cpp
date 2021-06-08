/* 
 *
 * Given an array nums containing n distinct numbers in the range [0, n], 
 * return the only number in the range that is missing from the array.
 *
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalSum = 0;
        int realSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            totalSum += i+1;
            realSum += nums[i];
        }
        
        return totalSum - realSum;
    }
};