/* 
 *
 * Given an array of integers arr, a lucky integer is an integer which has a 
 * frequency in the array equal to its value.
 * 
 * Return a lucky integer in the array. If there are multiple lucky integers 
 * return the largest of them. If there is no lucky integer return -1.
 *
 */

class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> map;
        set<int> lucky;
        
        for (int i = 0; i < arr.size(); i++) {
            map[arr[i]]++;
            if (map[arr[i]] == arr[i]) lucky.insert(arr[i]);
            if (map[arr[i]] == arr[i] + 1) lucky.erase(arr[i]);
        }
        
        if (!lucky.empty()) return *lucky.rbegin();
        else return -1;
    }
};