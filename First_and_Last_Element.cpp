class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        vector<int> arr = {-1, -1};
        
        // Find the last occurrence of target
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                arr[1] = mid;
                low = mid + 1; // Move right to find the last occurrence
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // Reset low and high for the second search
        low = 0;
        high = nums.size() - 1;

        // Find the first occurrence of target
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                arr[0] = mid;
                high = mid - 1; // Move left to find the first occurrence
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return arr;
    }
};
