#include <unordered_map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() / 2;
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            freq[num]++;
            if (freq[num] > n) {
                return num;
            }
        }
        return -1;
    }
};