class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> conversionTable = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"},  {9, "IX"},{5, "V"},  {4, "IV"}, {1, "I"}};

        int n = num;
        string result;

        for (auto &[value, symbol] : conversionTable) {
            while (n >= value) {
                result += symbol;
                n -= value;
            }
        }

        return result;
    }
};
