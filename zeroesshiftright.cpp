// Move zeroes to right
class Solution {
public:
    void swap(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        for (int r=0; r<n; r++) {
            if (nums[r] != 0) {
                swap(&nums[l],&nums[r]);
                l++;
            }
        }
    }
};
