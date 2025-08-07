class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> stringStore(numRows);
        if (numRows <= 1 || s.size() <= numRows) return s;
        string result;
        int n = s.size();
        int count = 0;
        int step = 1;
        for (int i=0; i<n; i++) {
            stringStore[count] += s[i];

            if (count == 0) step = 1;
            else if (count == numRows-1) step = -1;

            count += step;
        }

        for (int i=0; i < numRows; i++) {
            result += stringStore[i];
        }

        return result;
    }
};
