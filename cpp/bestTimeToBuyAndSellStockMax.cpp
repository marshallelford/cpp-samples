/* 
 *
 * You are given an array prices where prices[i] is the price of a given stock on the ith day.
 * 
 * Find the maximum profit you can achieve. You may complete as many transactions as you like 
 * (i.e., buy one and sell one share of the stock multiple times).
 *
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        
        int total = 0;
        
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i-1] < prices[i]) {
                total += prices[i] - prices[i-1];
            } 
        }
        
        return total;
    }
};