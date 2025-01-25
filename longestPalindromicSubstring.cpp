class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int maxLength = 1;

        if (s.length() == 0)
           return "";

        auto elementintheMiddle = [&] (int left, int right) {
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                if (right - left + 1 > maxLength) {
                    start = left;
                    maxLength = right - left + 1;
                }
                left--;
                right++;
            }
        };

        for (int i=0; i<s.length(); i++) {
            elementintheMiddle(i, i);

            elementintheMiddle(i, i+1);
        }

        return s.substr(start, maxLength);
    }
};
