class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool ans = false;
        vector<char> sub;
        if (s == "") {
            return true;
        }
        for (char sc : s) {
            sub.push_back(sc);
        }
        int i = 0;
        for (char c : t) {
            if (sub[i] == c) {
                i++;
                if (i == sub.size()) {
                    ans = true;
                    break;
                }
            }
        }

        return ans;
    }
};