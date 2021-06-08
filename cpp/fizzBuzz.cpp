/* 
 *
 * Given an integer n, return a string array answer (1-indexed) where:
 * 	answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
 * 	answer[i] == "Fizz" if i is divisible by 3.
 * 	answer[i] == "Buzz" if i is divisible by 5.
 * 	answer[i] == i if non of the above conditions are true.
 *
 */

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> output;
        
        for (int i = 1; i <= n; i++) {
            string c;
            if (i % 3 == 0) c += "Fizz";
            if (i % 5 == 0) c += "Buzz";
            if (c.empty()) output.push_back(to_string(i));
            else output.push_back(c);
        }
        
        return output;
    }
};