//Rearrange elements by sign
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i]>=0) {
                arr1.emplace_back(nums[i]);
            }
            else {
                arr2.emplace_back(nums[i]);
            }
        }
        int a1 = 0;
        int a2 = 0;
        for (int i=0; i<nums.size(); i++) {
            if (i%2 == 0 && a1<arr1.size()) {
                nums[i] = arr1[a1];
                a1++;
            }
            else if (i%2 && a2<arr2.size()) {
                nums[i] = arr2[a2];
                a2++;
            }
        }
        return nums;
    }
};
