class Solution {
public:
    string reverseWords(string s) {
        istringstream is(s);
        vector<string> reverse;
        string word;
        string answer;
        while (is >> word) {
            reverse.push_back(word);

        }
        for (int i = reverse.size() - 1; i >= 0; i--) {
            answer += reverse[i];
            if (i > 0)answer += " ";
        }
        return answer;
    }
};