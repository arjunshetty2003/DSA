//Remove duplicates in an array
//brute force
int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
        for (int i=0; i<n; i++) {
            st.insert(nums[i]);
        }
        int k = 0;
        for (auto it : st) {
            nums[k] = it;
            k++;
        }
        return k;
    }

//optimal
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int j=1; j<nums.size(); j++) {
            if (nums[j] != nums[i]) {
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
};
