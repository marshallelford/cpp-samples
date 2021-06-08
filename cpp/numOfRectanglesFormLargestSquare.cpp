/* 
 *
 * You are given an array rectangles where rectangles[i] = [li, wi] represents the 
 * ith rectangle of length li and width wi.
 * 
 * You can cut the ith rectangle to form a square with a side length of k if both 
 * k <= li and k <= wi. For example, if you have a rectangle [4,6], you can cut it 
 * to get a square with a side length of at most 4.
 * 
 * Let maxLen be the side length of the largest square you can obtain from any of 
 * the given rectangles.
 * 
 * Return the number of rectangles that can make a square with a side length of maxLen.
 *
 */

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int maxLength = 0;
        int count = 0;
        
        for (vector<int> rectangle : rectangles) {
            int squareLength = min(rectangle[0], rectangle[1]);
            if (squareLength == maxLength) count++;
            else if (squareLength > maxLength) {
                maxLength = squareLength;
                count = 1;
            }
        }
        
        return count;
    }
};