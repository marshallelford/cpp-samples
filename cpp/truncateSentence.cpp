/* 
 *
 * A sentence is a list of words that are separated by a single space with no leading 
 * or trailing spaces. Each of the words consists of only uppercase and lowercase 
 * English letters (no punctuation).
 * 
 * For example, "Hello World", "HELLO", and "hello world hello world" are all sentences.
 * 
 * You are given a sentence s​​​​​​ and an integer k​​​​​​. You want to truncate s​​​​​​ such that it 
 * contains only the first k​​​​​​ words. Return s​​​​​​ after truncating it.
 *
 */

class Solution {
public:
    string truncateSentence(string s, int k) {
        for (int i = 0; i < s.size(); i++)
            if (s[i] == ' ' && --k == 0)
                return s.substr(0, i);
        
        return s;
    }
};