/* 
 *
 * Given two integer arrays nums1 and nums2, return an array of their intersection. 
 * Each element in the result must appear as many times as it shows in both arrays 
 * and you may return the result in any order.
 *
 */

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // if nums1[i] is in nums2, add it to our output and remove it from both.
        vector<int> ans;
        while (!nums1.empty()) {
            if (find(nums2.begin(), nums2.end(), nums1[0]) == nums2.end()) {
                // no match, remove from nums1
                nums1.erase(nums1.begin());
            } else {
                // match!! add to ans and remove from both
                int index2 = find(nums2.begin(), nums2.end(), nums1[0]) - nums2.begin();
                ans.push_back(nums1[0]);
                nums1.erase(nums1.begin());
                nums2.erase(nums2.begin() + index2);
            }
        }
        return ans;
    }
};