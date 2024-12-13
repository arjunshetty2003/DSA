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
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size(), lo = 0, hi = m - 1, mid; 
        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;
            int max_row = 0;
            for (int i = 0; i < n; ++i) {
                if (matrix[max_row][mid] < matrix[i][mid])
                    max_row = i;
            }
            if ((mid == 0 || matrix[max_row][mid] > matrix[max_row][mid - 1]) && 
                (mid == m - 1 || matrix[max_row][mid] > matrix[max_row][mid + 1]))
                return {max_row, mid};
            else if (mid > 0 && matrix[max_row][mid - 1] > matrix[max_row][mid])
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        return {-1, -1};
    }
};
