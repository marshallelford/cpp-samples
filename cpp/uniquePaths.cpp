/* 
 *
 * A robot is located at the top-left corner of a m x n grid.
 * 
 * The robot can only move either down or right at any point in time. 
 * The robot is trying to reach the bottom-right corner of the grid.
 * 
 * How many possible unique paths are there?
 *
 */

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> ways(m, vector<int>(n, 1));
        
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                ways[i][j] = ways[i-1][j] + ways[i][j-1];
            }
        }
        
        return ways[m-1][n-1];
    }
};