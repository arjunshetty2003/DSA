class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int end = s.length()-1;

        while (start <= end && s[start]==' ') {start++; }
        while (end >= start && s[end]==' ') {end--;}

        vector<string> words;
        string word;

        for (int i=start; i <= end; i++) {
            if (s[i] == ' ' && !(word.empty())) {
                words.push_back(word);
                word = "";
            }
            else if (s[i] != ' ')
               word += s[i];
        }

        if (!(word.empty())) {
            words.push_back(word);
        }

        std::reverse(words.begin(), words.end());

        string result;

        for (int i=0; i< words.size(); i++) {
            result += words[i];
            if (i < words.size()-1)
               result += " ";
        }

        return result;
    }
};
