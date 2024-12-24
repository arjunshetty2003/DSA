class Solution {
public:
    string frequencySort(string s) {
        string result;

        map<char, int> countMap;
        for (char c : s) {
            countMap[c]++;
        }

        vector<pair<int, char>> countFreq;

        for (auto it : countMap) {
            countFreq.push_back({it.second, it.first});
        }

        sort(countFreq.rbegin(), countFreq.rend());

        for (auto it : countFreq) {
            result.append(it.first, it.second);
        }

        return result;
    }
};
