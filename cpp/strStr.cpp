/* 
 *
 * Implement strStr().
 * 
 * Return the index of the first occurrence of needle in haystack, 
 * or -1 if needle is not part of haystack.
 *
 */

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        
        for (int i = 0; i < haystack.size(); i++) {
            if (haystack[i] == needle[0]) {
                // character match, see if the substring matches, and if so return i
                string s = haystack.substr(i, needle.size());
                if (s == needle) return i;
            }
        }
        
        return -1;
    }
};

/* Alternate KMP Algorithm
class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size(), n = needle.size();
        if (!n) {
            return 0;
        }
        vector<int> lps = kmpProcess(needle);
        for (int i = 0, j = 0; i < m;) {
            if (haystack[i] == needle[j]) { 
                i++, j++;
            }
            if (j == n) {
                return i - j;
            }
            if (i < m && haystack[i] != needle[j]) {
                j ? j = lps[j - 1] : i++;
            }
        }
        return -1;
    }
private:
    vector<int> kmpProcess(string needle) {
        int n = needle.size();
        vector<int> lps(n, 0);
        for (int i = 1, len = 0; i < n;) {
            if (needle[i] == needle[len]) {
                lps[i++] = ++len;
            } else if (len) {
                len = lps[len - 1];
            } else {
                lps[i++] = 0;
            }
        }
        return lps;
    }
};
*/