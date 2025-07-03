class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>ans;
        vector<char>check;
        bool Palindrome = false;
        for (char c : s) {
            if (isalnum(c)) {
                ans.push_back(tolower(c));
            }
        }
        for (int i = ans.size() - 1; i >= 0; i--) {
            check.push_back(ans[i]);
        }
        if (ans == check) {
            Palindrome = true;
        }
        return Palindrome;
    }
};