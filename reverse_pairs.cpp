class Solution {
public:
    int merge(vector<int>& nums, int low, int mid, int high) {
        int cnt = 0;
        int left = low;
        int right = mid+1;
        vector<int> temp;

        // Counting reverse pairs 
        for (int left=low; left<=mid; left++) {
            while (right<=high && (long)nums[left] > 2L*(long)nums[right])
               right++;
            cnt += (right-(mid+1));
        }

        left = low;
        right = mid+1;

        // Merging and Sorting Array
        while (left<=mid && right<=high) {
            if (nums[left]<=nums[right]) {
                temp.emplace_back(nums[left]);
                left++;
            }
            else {
                temp.emplace_back(nums[right]);
                right++;
            }
        }

        while (left<=mid) {
            temp.emplace_back(nums[left]);
            left++;
        }
        while (right<=high) {
            temp.emplace_back(nums[right]);
            right++;
        }

        for (int i=low; i<=high; i++) {
            nums[i] = temp[i-low];
        }
        return cnt;
    }
    
    int mergeSort(vector<int>& nums,int low, int high) {
        int cnt = 0;
        if (low>=high)
           return cnt;

        int mid = (low+high)/2;

        // Adding Count
        cnt += mergeSort(nums,low,mid);
        cnt += mergeSort(nums,mid+1,high);
        cnt += merge(nums,low,mid,high);

        return cnt;
    }

    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return mergeSort(nums,0,n-1);
    }
};
