class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size();
        int temp = 1;
        for (int i = 1; i < nums.size();) {
            if (nums[i] == nums[i - 1]) {
                temp++;
                if (temp > 2) {
                    nums.erase(nums.begin() + i);
                    continue;
                }
            }
            else {
                temp = 1;
            }
            i++;

        }
        return nums.size();
    }
};
//sol 1

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size();
        int temp = 2;
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] != nums[temp - 2]) {
                nums[temp] = nums[i];
                temp++;
            }
        }
        return temp;
    }
};
// sol 2