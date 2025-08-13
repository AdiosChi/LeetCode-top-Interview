class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> a, b;
        if (s.size() != t.size()) {
            return false;
        }
        for (char ch : s) {
            a[ch]++;
        }
        for (char ch : t) {
            b[ch]++;
        }
        for (const auto& pair : a) {
            if (a[pair.first] != b[pair.first]) {
                return false;
            }
        }
        return true;
    }
};