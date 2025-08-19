class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> check;
        for (int i = 0; i < nums.size(); i++) {
            check[nums[i]].push_back(i);
        }
        for (int i = 0; i < nums.size(); i++) {
            if (check[nums[i]].size() >= 2) {

                for (int j = 0; j < check[nums[i]].size() - 1; j++) {
                    int sum = abs(check[nums[i]][j] - check[nums[i]][j + 1]);
                    if (sum <= k) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};