/* 
 *
 * Given an integer array nums and an integer k, return the k most frequent elements. 
 *
 */

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (k >= nums.size()) return nums;

        // get the count of each element
        map<int, int> map;
        for (int n : nums) {
            map[n]++;
        }
        
        // get an array containing each unique element in nums
        vector<int> unique;
        for (pair<int, int> p : map) {
            unique.push_back(p.first);
        }
        
        // sort the unique array by the count of each element
        vector<int> sorted;
        for (int n : unique) {
            int index = 0;
            while (index < sorted.size()) {
                if (map[n] > map[sorted[index]]) break;
                index++;
            }
            if (index == sorted.size()) sorted.push_back(n);
            else sorted.insert(sorted.begin() + index, n);
        }
        
        // return the top k elements in the sorted unique array
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(sorted[i]);
        }
        
        return ans;
    }
};