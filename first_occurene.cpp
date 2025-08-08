// Brute force O(N*M)
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        if (m == 0) return 0;
        if (m > n) return -1;
        

        for (int i=0; i<= n-m; i++) /*Only check there is enough space left to match the needle */{
            int j = 0;
            while (j < m && haystack[i+j] == needle[j]) {
                j++;
            }
            if (j == m)
               return i;
        }

        return -1;
    }
};

//Optimal O(M+N)
class Solution {
public:
    vector<int> computelps(string &pattern) {
        int n = pattern.size();
        vector<int> lps(n, 0);
        int len = 0;

        for (int i=1; i<n; ) {
            if (pattern[i] == pattern[len]) {
                lps[i++] = ++len;
            }
            else {
                if (len != 0) {
                    len = lps[len-1];
                }
                else {
                    lps[i++] = 0;
                }
            }
        }

        return lps;
    }
    
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        vector<int> lps = computelps(needle);
        int i = 0, j = 0;

        while (i < m) {
            while (i <m && haystack[i] == needle[j]) {
                i++, j++;
            }
            if (j == n) return i-j;

            if (i <m && haystack[i] != needle[j]) {
                if (j != 0)
                   j = lps[j-1];
                else {
                    i++;
                }
            }
        }
        return -1;
    }
};
