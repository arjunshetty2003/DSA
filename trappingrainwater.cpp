// Two pointer
//TC O(N) SC O(1)

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size()-1;
        int left = 0;
        int right = n;
        int maxLeft = height[left];
        int maxRight = height[right];
        int totalWater = 0;
        while (left <= right) {
            maxLeft = max(maxLeft, height[left]);
            maxRight = max(maxRight, height[right]);

            if (maxRight > maxLeft) {
                totalWater += maxLeft - height[left];
                left++; 
            }
            else {
                totalWater += maxRight - height[right];
                right--;
            }
        }
        return totalWater;
    }
};
