/* 
 *
 * You are given an m x n integer grid accounts where accounts[i][j] is 
 * the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. 
 * Return the wealth that the richest customer has.
 * 
 * A customer's wealth is the amount of money they have in all their bank accounts. 
 * The richest customer is the customer that has the maximum wealth.
 *
 */

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest = 0;
        
        for (int customer = 0; customer < accounts.size(); customer++) {
            int wealth = 0;
            
            for (int bank = 0; bank < accounts[customer].size(); bank++) {
                wealth += accounts[customer][bank];
            }
            
            if (wealth > richest) richest = wealth;
        }
        
        return richest;
    }
};