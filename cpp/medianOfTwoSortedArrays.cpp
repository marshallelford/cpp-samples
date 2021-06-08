/* 
 *
 * Given two sorted arrays nums1 and nums2 of size m and n respectively, 
 * return the median of the two sorted arrays.
 * 
 * The overall run time complexity should be O(log (m+n)).
 *
 */

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() == 0 && nums2.size() == 0) return 0.0;
        
        // merge the arrays
        
        int length = nums1.size() + nums2.size();
        int merged[length];
        int i = 0, j = 0, m = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                merged[m] = nums1[i];
                i++;
            } else {
                merged[m] = nums2[j];
                j++;
            }
            m++;
        }
        
        while (i < nums1.size()) {
            merged[m] = nums1[i];
            m++; i++;
        }
        
        while (j < nums2.size()) {
            merged[m] = nums2[j];
            m++; j++;
        }
        
        // arrays are now merged, find the median
        
        double median = 0.0;
        if (m % 2 == 0) {
            // even
            median = (double) ((merged[(m / 2) - 1] + merged[m / 2]) / 2.0);
        } else {
            // odd
            median = (double) merged[m / 2];
        } 
        
        return median;
    }
};