// Brute Force O(n) but space O(n)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> temp;
        vector<int> res;
        for (int i=0; i < nums.size(); i++) {
            temp.insert(nums[i]);
        }
        for (auto x : temp) {
            res.push_back(x);
        }

        nums = res;
        return nums.size();
    }
}; 

// Optimal Two-Pointer but space O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> temp;
        vector<int> res;
        for (int i=0; i < nums.size(); i++) {
            temp.insert(nums[i]);
        }
        for (auto x : temp) {
            res.push_back(x);
        }

        nums = res;
        return nums.size();
    }
}; 
