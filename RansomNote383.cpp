class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> A;
        map<char, int> B;
        for (char ch : ransomNote) {
            A[ch]++;
        }
        for (char ch : magazine) {
            B[ch]++;
        }
        for (const auto& pair : A) {
            if (A[pair.first] > B[pair.first]) {
                return false;
            }
        }
        return true;
    }
};