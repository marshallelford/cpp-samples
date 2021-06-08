/* 
 *
 * In a array nums of size 2 * n, there are n + 1 unique elements, 
 * and exactly one of these elements is repeated n times.
 * 
 * Return the element repeated n times.
 *
 */

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int N = A.size() / 2;
        map<int, int> map;
        
        for (int i = 0; i < A.size(); i++) {
            if (map.find(A[i]) != map.end()) {
                int count = map.at(A[i]);
                count++;
                if (count == N) return A[i];
                map.at(A[i]) = count;
            } else {
                map.insert({A[i], 1});
            }
        }
        
        return NULL;
    }
};