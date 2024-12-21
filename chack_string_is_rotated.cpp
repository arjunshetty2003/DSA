class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length())
           return false;

        string doubleString = s+s;

        if (doubleString.find(goal) < doubleString.size()-1)
           return true;
        else
           return false;
    }
};
