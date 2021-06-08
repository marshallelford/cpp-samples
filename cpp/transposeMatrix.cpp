/* 
 *
 * Given a 2D integer array matrix, return the transpose of matrix.
 * 
 * The transpose of a matrix is the matrix flipped over its main diagonal, 
 * switching the matrix's row and column indices.
 *
 */

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rowLength = matrix.size(), colLength = matrix[0].size();
        vector<vector<int>> output(colLength, vector<int>(rowLength, 0));
        
        for (int j = 0; j < colLength; j++)
            for (int i = 0; i < rowLength; i++)
                output[j][i] = matrix[i][j];
        
        return output;
    }
};