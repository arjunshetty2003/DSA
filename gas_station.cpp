// Time complexity O(N) space complexity O(1)

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = accumulate(gas.begin(), gas.end(), 0);
        int totalCost = accumulate(cost.begin(), cost.end(), 0);

        if (totalGas < totalCost)
           return -1;
        
        int n = cost.size();
        int start = 0;
        int netGas = 0;
        for (int i=0; i<n; i++) {
            netGas += gas[i] - cost[i];
            if (netGas < 0) {
                netGas = 0;
                start = i+1;
            }
        }
        return start;
    }
};
