//Permutation
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        std::next_permutation(nums.begin(), nums.end());
    }
};
//Inner Working
class Solution {
public:
    void swap(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n-2;
        int pivot;
        while (i>=0) {
            if (nums[i] < nums[i+1]) {
                pivot = nums[i];
                break;
            }
            i--;
        }
        for (int j=n-1; j>i; j--) {
            if (nums[j]>pivot) {
                swap(&nums[j], &nums[i]);
                break;
            }
        }
        std::sort(nums.begin()+i+1,nums.end());
    }
};
