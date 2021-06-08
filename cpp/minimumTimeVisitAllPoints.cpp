/* 
 *
 * On a 2D plane, there are n points with integer coordinates points[i] = [xi, yi]. 
 * Return the minimum time in seconds to visit all the points in the order given by points.
 * 
 * You can move according to these rules:
 * 
 * In 1 second, you can either:
 * move vertically by one unit,
 * move horizontally by one unit, or
 * move diagonally sqrt(2) units (move one unit vertically then one unit horizontally).
 * 
 * You have to visit the points in the same order as they appear in the array.
 * You are allowed to pass through points that appear later in the order, 
 * but these do not count as visits.
 *
 */

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        if (points.empty()) return 0;
        
        int time = 0;
        int x = points[0][0];
        int y = points[0][1];
        
        for (vector<int> point : points) {
            while (point[0] != x || point[1] != y) {
                time++;
                
                if (point[0] > x) x++;
                else if (point[0] < x) x--;
                
                if (point[1] > y) y++;
                else if (point[1] < y) y--;
            }
        }
        
        return time;
    }
};