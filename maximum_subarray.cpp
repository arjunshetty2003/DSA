//Brute force
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
           return nums[0];
        int i = 0;
        int maximum = INT_MIN;
        while (i < n) {
            int sum = 0;
            for (int j=i; j < n; j++) {
                sum += nums[j];
                maximum = std::max(sum, maximum);
            }
            i++;
        }
        return maximum;
    }
};

//Optimal
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
           return nums[0];
        int sum = 0;
        int maximum = INT_MIN;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            maximum = std::max(sum, maximum);
            if (sum < 0)
               sum = 0;
        }
        return maximum;
    }
};
