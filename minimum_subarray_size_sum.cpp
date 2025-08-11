class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT_MAX;
        int currSum = 0;
        int left = 0;
        int n = nums.size();
        for (int right =0; right<n; right++) {
            currSum += nums[right];
            while (currSum >= target) {
                minLen = min(minLen, right-left+1);
                currSum -= nums[left];
                left++;
            }
        }

        return minLen != INT_MAX ? minLen : 0;
    }
};
