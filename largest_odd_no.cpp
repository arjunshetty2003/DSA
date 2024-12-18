class Solution {
public:
    string largestOddNumber(string num) {
        string ans;
        int endIndex;
        for (int i=num.length()-1; i>=0; i--) {
            if (num[i] == '1' || num[i] == '3' || num[i] == '5' || num[i] == '7' || num[i] == '9' ) {
                endIndex = i;
                break;
            }
        }
        
        for (int i=0; i<=endIndex; i++) {
            ans += num[i];
        }

        return ans;
    }
};
