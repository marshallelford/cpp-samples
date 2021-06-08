/* 
 *
 * Given an integer array nums of unique elements, 
 * return all possible subsets (the power set).
 *
 * The solution set must not contain duplicate subsets. Return the solution in any order.
 *
 */

class Solution {
private:
    void backtrack(vector<vector<int>>& list, vector<int> tempList, vector<int> nums, int start) {
        list.push_back(tempList);
        for (int i = start; i < nums.size(); i++) {
            tempList.push_back(nums[i]);
            backtrack(list, tempList, nums, i+1);
            tempList.erase(tempList.begin() + tempList.size() - 1);
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> list;
        backtrack(list, {}, nums, 0);
        return list;
    }
};
