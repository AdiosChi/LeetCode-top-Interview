class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, end = 0, ans = 0, tempans = 0;
        unordered_map<char, int> letter;
        for (end; end < s.size(); end++) {
            char temp = s[end];

            if (letter.find(temp) != letter.end()) {
                start = max(start, letter[temp] + 1);
                tempans = end - start;
            }
            letter[temp] = end;
            tempans++;
            if (tempans > ans) {
                ans = tempans;
            }

        }
        return ans;
    }
};