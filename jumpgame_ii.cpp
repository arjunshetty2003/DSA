class Solution {
public:
    int jump(vector<int>& nums) {
        int jump =0, left=0, right=0;
        int maxi = 0;
        while(right < nums.size()-1) {
            for (int i=left; i<=right; i++) {
                maxi = max(maxi, i+nums[i]);
            }
            jump++;
            left = right+1;
            right = maxi;
        }
        return jump;
    }
};
