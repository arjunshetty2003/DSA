//Kadane's Algorithm
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 0;
        int maximum = INT_MIN;
        int profit;
        while (r<prices.size()) {
            profit = prices[r]-prices[l];
            if (profit > maximum)
               maximum = profit;
            if (profit < 0) {
                l++;
                r++;
            }
            else {
                r++;
            }
        }
        return maximum;
    }
};
