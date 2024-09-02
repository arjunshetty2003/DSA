//Rotate array to right
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n; //If input number is greater than size of array
        std::reverse(nums.begin(),nums.end());
        std::reverse(nums.begin(),nums.begin()+k);
        std::reverse(nums.begin()+k, nums.end());
    }
};
