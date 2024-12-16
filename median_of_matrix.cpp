class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        int m = mat.size();
        int n = mat[0].size();
        
        int minVal = mat[0][0];
        int maxVal = mat[0][n-1];
        
        for (int i = 0; i<m; i++) {
            minVal = min(mat[i][0], minVal);
            maxVal = max(mat[i][n-1], maxVal);
        }
        
        int desired = (m*n)/2;
        
        while (minVal < maxVal) {
            int mid = minVal + (maxVal - minVal)/2;
            int count = 0;
            
            for (int i=0; i<m; i++) {
                count += upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin();
            }
            
            if (count<=desired) {
                minVal = mid+1;
            }
            else {
                maxVal = mid;
            }
        }
        
        return minVal;
    }
};
