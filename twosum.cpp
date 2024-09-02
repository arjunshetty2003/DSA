//Two Sum
//Brute-force
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        for (int i=0; i<nums.size(); i++) {
            for (int j=0; j<nums.size(); j++) {
                if (i == j) {
                    continue;
                }
                else {
                    if (nums[i]+nums[j] == target) {
                        arr.emplace_back(i);
                        arr.emplace_back(j);
                        return arr;
                    }
                }
            }
        }
        return arr;
    }
};
