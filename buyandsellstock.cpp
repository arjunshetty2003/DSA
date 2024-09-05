//Buy and sell stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int profit = 0;
        for (int i=1; i<prices.size(); i++) {
            profit = std::max(profit, prices[i]-min);
            min = std::min(min,prices[i]);
        }
        return profit;
    }
};
