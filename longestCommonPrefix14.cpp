class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string finalresult = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            string st1 = strs[0];
            string st2 = strs[i];
            string result;

            int minlen = min(strs[0].size(), strs[i].size());
            for (int j = 0; j < minlen; j++) {
                if (st1[j] == st2[j]) {
                    result = result + st1[j];
                }
                else break;
            }
            if (finalresult.size() > result.size()) {
                finalresult = result;
            }
            result = "";
        }
        return finalresult;
    }
};//sol 1

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string a = strs.front();
        string b = strs.back();
        string result;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == b[i]) {
                result += a[i];
            }
            else break;
        }
        return result;
    }
};//sol 2