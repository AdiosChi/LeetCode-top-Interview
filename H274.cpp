class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int i;
        int h = 0;
        i = citations.size() - 1;
        for (i; i >= 0; i--) {
            if (citations[i] > h) {
                h++;
            }
        }

        return h;
    }
};