class Solution {
public:
    int jump(vector<int>& nums) {
        int j = 0;
        int t = 0;
        int current = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            j = max(j, i + nums[i]);
            if (i == current) {
                t++;
                current = j;
            }

        }
        return t;
    }
};