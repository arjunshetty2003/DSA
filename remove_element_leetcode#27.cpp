// Brute Force O(n^2)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
            }
            else {
                i++;
            }
        }
        return nums.size();
    }
};
 
// Better O(n) but Space O(n)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> temp;
        for (int i=0; i< nums.size(); i++) {
            if (nums[i] != val) {
                temp.push_back(nums[i]);
            }
        }

        nums = temp;
        return nums.size();
    }
};

//Optimal Two Pointer O(n) and space O(1)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int k = 0;
        for (int i=0; i<n; i++) {
            if (nums[i] != val) {
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};
