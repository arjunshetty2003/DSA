class Solution {
public:
    int maximum(std::vector<int>& nums) {
        int maximum = INT_MIN;
        for (int num : nums) {
            maximum = std::max(maximum, num);
        }
        return maximum;
    }

    int minEatingSpeed(std::vector<int>& piles, int h) {
        int low = 1;
        int high = maximum(piles);
        
        while (low < high) {  // Adjust binary search condition to `low < high`
            int mid = low + (high - low) / 2;
            int sum = 0;
            for (int pile : piles) {
                sum += (pile + mid - 1) / mid;  // Alternative to `ceil` to avoid floating-point errors
            }
            if (sum > h)
                low = mid + 1;
            else
                high = mid;
        }
        
        return low; // After exiting loop, `low` is the minimum speed satisfying the condition
    }
};
