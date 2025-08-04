// Brute O(N) time O(N) Space
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(), 1);
        vector<int> postfix(nums.size(), 1);
        vector<int> result;
        int n = nums.size();
        int prefixProd = 1;
        int postfixProd = 1;
        for (int i=0; i< prefix.size(); i++) {
            prefixProd *= nums[i];
            prefix[i] = prefixProd;
        }

        for (int i=postfix.size()-1; i >=0; i--) {
            postfixProd *= nums[i];
            postfix[i] = postfixProd;
        }

        for (int i=0; i<n; i++) {
            if (i == 0) {
                nums[i] = postfix[i+1];
            }
            else if (i == n-1) {
                nums[i] = prefix[i-1];
            }
            else {
                nums[i] = prefix[i-1]*postfix[i+1];
            }
        }

        return nums;

    }
};

// Optimal same time but O(1) space
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prefixProd = 1;
        int postfixProd = 1;
        vector<int> result(n);
        result[0] = 1;
        for (int i=1; i<n; i++) {
            prefixProd *= nums[i-1];
            result[i] = prefixProd;
        }

        for (int i=n-2; i>=0; i--) {
            postfixProd *= nums[i+1];
            result[i] *= postfixProd;
        }
        return result;
    }
};
