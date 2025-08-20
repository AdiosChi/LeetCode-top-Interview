class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if (nums.size() < 2) {
            if (nums.empty()) {
                return ans;
            }
            ans.push_back(to_string(nums[0]));
        }
        if (nums.size() >= 2) {
            for (int i = 0; i < nums.size(); i++) {

                if (i + 1 < nums.size() && nums[i] == nums[i + 1] - 1) {
                    string s = to_string(nums[i]);
                    while (1) {


                        if (nums[i] != nums[i + 1] - 1) {
                            s += ("->" + to_string(nums[i]));
                            break;
                        }
                        i++;
                        if (i == nums.size() - 1) {
                            s += ("->" + to_string(nums[i]));
                            break;
                        }
                    }
                    ans.push_back(s);
                }
                else {
                    ans.push_back(to_string(nums[i]));

                }
            }
        }
        return ans;
    }
};