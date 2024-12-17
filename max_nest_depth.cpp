class Solution {
public:
    int maxDepth(string s) {
        int maxDepth = 0;

        int depth = 0;
        for (char c : s) {
            if (c == '(') {
                depth++;
                maxDepth = std::max(depth, maxDepth);
            }
            else if (c == ')')
               depth--;
        }

        return maxDepth;
    }
};
