//Brute force O((m+n)log(m+n))

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i=0; i<n; i++) {
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};

//Optimal O(m+n)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;

        while (i >= 0 && j >= 0) {
          if (nums1[i] <= nums2[j]) {
            nums1[k--] = nums2[j--];
          }
          else {
            nums1[k--] = nums1[i--];
          }
        }

      if (j >= 0) {
        nums1[k--] = nums[j--];
      }
    }
};
