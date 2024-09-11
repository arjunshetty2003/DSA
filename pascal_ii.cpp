//PT II
class Solution {
public:
    // Function to calculate the binomial coefficient C(r, c) iteratively to avoid overflow
    int fun(int r, int c) {
        if (c == 0 || c == r) return 1; // Base cases: C(r, 0) = C(r, r) = 1
        long long res = 1; // Use long long to avoid overflow during multiplication
        for (int i = 1; i <= c; i++) {
            res *= (r - i + 1);
            res /= i;
        }
        return res;
    }

    // Function to get the rowIndex-th row of Pascal's Triangle
    vector<int> getRow(int rowIndex) {
        vector<int> indexVec;
        for (int i = 0; i <= rowIndex; i++) {
            int v = fun(rowIndex, i);
            indexVec.emplace_back(v);
        }
        return indexVec;
    }
};
