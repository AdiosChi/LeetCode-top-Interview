class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int sum = 0;
        int temp = 0;
        while (i != j) {
            int L = j - i;

            if (height[i] >= height[j]) {
                sum = height[j] * L;
                j--;
            }
            else {
                sum = height[i] * L;
                i++;
            }

            if (sum > temp) {
                temp = sum;
            }
        }

        return temp;
    }
};