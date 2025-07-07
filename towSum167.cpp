class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1, index2;
        vector<int> answer;
        int i = 0;
        int j = numbers.size() - 1;
        while (1) {
            int sum = numbers[i] + numbers[j];
            if (sum < target) {
                i++;
            }
            else if (sum > target) {
                j--;
            }
            if (sum == target) {
                index1 = i + 1;
                index2 = j + 1;
                break;
            }
        }
        answer.push_back(index1);
        answer.push_back(index2);
        return answer;
    }
};