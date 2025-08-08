// O(N)
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int i = 0, n = words.size();

        while (i < n) {
            int lineLength = words[i].size();
            int j = i + 1;

            // Find how many words fit in the current line
            while (j < n && lineLength + 1 + words[j].size() <= maxWidth) {
                lineLength += 1 + words[j].size();
                j++;
            }

            int wordCount = j - i;
            int totalSpaces = maxWidth - (lineLength - (wordCount - 1));
            string line;

            // If it's the last line or the line has only one word -> left-justify
            if (j == n || wordCount == 1) {
                for (int k = i; k < j; ++k) {
                    line += words[k];
                    if (k < j - 1) line += " ";
                }
                line += string(maxWidth - line.size(), ' ');
            } 
            else {
                int spaces = totalSpaces / (wordCount - 1);
                int extra = totalSpaces % (wordCount - 1);

                for (int k = i; k < j; ++k) {
                    line += words[k];
                    if (k < j - 1) {
                        line += string(spaces + (extra-- > 0 ? 1 : 0), ' ');
                    }
                }
            }

            result.push_back(line);
            i = j;
        }

        return result;
    }
};
