class Solution {
public:
    bool isHappy(int n) {
        int t = 0;
        while (1) {
            t++;
            int sum = 0;
            string s = to_string(n);
            for (int i = 0; i < s.size(); i++) {
                int temp = n % 10;
                sum += pow(temp, 2);
                n = n / 10;
            }
            n = sum;
            if (n == 1) return true;
            else if (t == 100) return false;

        }

    }
};