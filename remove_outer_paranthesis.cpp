class Solution {
public:
    string removeOuterParentheses(string s) {
        string ansString = "";
        int depth = 0;

        for (char c : s) {
            if (c == '(') {
                if (depth > 0)
                   ansString += c;
                depth++;
            }
            else {
                depth--;
                if (depth > 0)
                   ansString += c;
                
            }
        }

        return ansString;
    }
};
