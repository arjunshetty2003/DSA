class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> rn_count;
        unordered_map<char, int> m_count;

        for (int i = 0; i<ransomNote.size(); i++) {
            rn_count[ransomNote[i]]++;
        }

        for (int i=0; i<magazine.size(); i++) {
            m_count[magazine[i]]++;
        }

        for (auto pair : rn_count) {
            if (pair.second > m_count[pair.first])
               return false;
        }

        return true;
    }
};
