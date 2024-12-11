//Brute force
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int> solution;
        int m = mat.size()-1;
        int n = mat[0].size()-1;
        int left, right, top, bottom;
        for (int i=0; i<=m; i++) {
            for (int j=0; i<=n; j++) {
                if (i == 0) {
                    top = -1;
                }
                else {
                    top = mat[i-1][j];
                }
                if (i == m) {
                    bottom = -1;
                }
                else {
                    bottom = mat[i+1][j];
                }
                if (j == 0) {
                    left = -1;
                }
                else {
                    left = mat[i][j-1];
                }
                if (j == n) {
                    right = -1;
                }
                else {
                    right = mat[i][j+1];
                }
                if ((mat[i][j]) > left && (mat[i][j]) > right && (mat[i][j]) > top && (mat[i][j]) > bottom ) {
                    solution.emplace_back(i);
                    solution.emplace_back(j);
                    return solution;
                }
            }
        }
        return {-1,-1};
    }
};

// Optimal approach
