class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream iss(s);
        string word;
        vector<string> words;
        unordered_map <char, string> cs;
        unordered_map <string, char> sc;
        while (iss >> word) {
            words.push_back(word);
        }
        if (words.size() != pattern.size()) {
            return false;
        }
        for (int i = 0; i < pattern.size(); i++) {
            char a = pattern[i];
            string b = words[i];
            if ((cs.find(a) != cs.end() && cs[a] != b) || sc.find(b) != sc.end() && sc[b] != a) {
                return false;
            }
            cs[a] = b;
            sc[b] = a;
        }
        return true;
    }
};