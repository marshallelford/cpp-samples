/* 
 *
 * Given the array candies and the integer extraCandies, where candies[i] represents 
 * the number of candies that the ith kid has.
 * 
 * For each kid check if there is a way to distribute extraCandies among the kids 
 * such that he or she can have the greatest number of candies among them. 
 * Notice that multiple kids can have the greatest number of candies.
 *
 */

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> possible;
        int maxCandy = 0;
        
        for (int i = 0; i < candies.size(); i++) {
            maxCandy = max(maxCandy, candies[i]);
        }
        
        for (int i = 0; i < candies.size(); i++) {
            int candy = candies[i] + extraCandies;
            if (candy >= maxCandy) possible.push_back(true);
            else possible.push_back(false);
        }
        
        return possible;
    }
};