/* 
 *
 * Given an array nums of non-negative integers, 
 * return an array consisting of all the even elements of nums, 
 * followed by all the odd elements of nums.
 * 
 * You may return any answer array that satisfies this condition.
 *
 */

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> even;
        vector<int> odd;
        vector<int> output;
        
        for (int a : A) {
            if (a % 2 == 0) even.push_back(a);
            else odd.push_back(a);
        }
        
        for (int a : even) output.push_back(a);
        for (int a : odd) output.push_back(a);
        
        return output;
    }
};