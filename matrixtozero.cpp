//Matrix to zero
//O(n) space
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<bool>rows(m,0);
        vector<bool>cols(n,0);
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (matrix[i][j] == 0) {
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (rows[i] || cols[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
//Constant space solution
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool rowhasZeroes = false;
        bool colhasZeroes = false;
        for (int i=0; i<m; i++) {
            if (matrix[i][0] == 0) {
                rowhasZeroes = true;
                break;
            }
        }
        for (int i=0; i<n; i++) {
            if (matrix[0][i] == 0) {
                colhasZeroes = true;
                break;
            }
        }
        for (int i=1; i<m; i++) {
            for (int j=1; j<n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                }
            }
        }
        for (int i=1; i<m; i++) {
            for (int j=1; j<n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[0][j] = 0;
                }
            }
        }
        for (int i=1; i<m; i++) {
            for (int j=1; j<n; j++) {
                if (matrix[i][0]==0 || matrix[0][j]==0) {
                    matrix[i][j] = 0;
                }
            }
        }
        if (rowhasZeroes) {
            for (int i=0; i<m; i++) {
                matrix[i][0] = 0;
            }
        }
        if (colhasZeroes) {
            for (int j=0; j<n; j++) {
                matrix[0][j] = 0;
            }
        }
    }
};
