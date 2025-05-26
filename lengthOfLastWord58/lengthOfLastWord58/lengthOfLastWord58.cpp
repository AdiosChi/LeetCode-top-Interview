class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                count++;
            }
            else if (s[i] == ' ' && s[i + 1] != ' ') {
                if (i + 1 >= s.size()) {
                    break;
                }
                count = 0;

            }
        }
        return count;
    }
};