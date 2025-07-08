class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int sum = 0;
        int start = 0;
        int end = 0;
        int ans = INT_MAX;
        for (end; end < nums.size(); end++) {

            sum = sum + nums[end];
            while (sum >= target) {
                if (ans > (end - start)) {
                    ans = end - start + 1;
                }
                sum = sum - nums[start];
                start++;
            }


        }
        if (ans == INT_MAX)ans = 0;
        return ans;

    }
};