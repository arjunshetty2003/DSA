class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int i= s.length()-1;

        for (i; i>=0; i--) {
            if (s[i] != ' ')
               break;
        }

        while (i >=0) {
            if (s[i] != ' ') {
                len++;
                i--;
            }
            else {
                break;
            }
        }
        return len;
    }
};
