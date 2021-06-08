/* 
 *
 * You are given an array prices where prices[i] is the price of a given stock on the ith day.
 * 
 * You want to maximize your profit by choosing a single day to buy one stock and choosing a 
 * different day in the future to sell that stock.
 *
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minS = INT_MAX;
        int maxS = 0;
        int output = 0;
        
        for (int price : prices) {
            if (price > maxS && price > minS) maxS = price;
            else if (price < minS) {
                minS = price;
                maxS = 0;
            }
            
            output = max(output, maxS - minS);
        }
        
        return output;
    }
};