class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size()-1;
        int n = matrix[0].size()-1;
        for (int i=0; i<=m; i++) {
            int low = 0;
            int high = n;
            while (low<=high) {
                int mid = low + (high-low)/2;
                if (matrix[i][mid] == target)
                   return true;
                else if (matrix[i][mid]<target)
                   low = mid+1;
                else
                   high = mid-1;
            }
        }
        return false;
    }
};
