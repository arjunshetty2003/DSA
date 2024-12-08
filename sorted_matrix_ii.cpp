// Better approach
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

//Optimal Approach

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size()-1;
        int n = matrix[0].size()-1;
        int row = 0; 
        int col = n;
        while (row<=m && col >= 0) {
            if (matrix[row][col] == target)
               return true;
            else if (matrix[row][col] < target)
               row++;
            else
               col--;
        }
        return false;
    }
};
