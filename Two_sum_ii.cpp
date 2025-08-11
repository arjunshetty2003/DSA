// Time complexity O(N)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        

        while (left < right) {
            int mid = (left+right)/2;
            if (numbers[left] + numbers[right] == target) {
                return {left+1, right+1};
            }
            else if (numbers[left]+numbers[right] < target) {
                left = mid+1;
            }
            else {
                right = mid-1;
            }
        }
        return {};
    }
};
