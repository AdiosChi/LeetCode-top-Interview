class Solution {
public:
    string intToRoman(int num) {
        string roman;
        int temp = num;
        if (num >= 1000) {
            temp = num / 1000;
            for (int i = 0; i < temp; i++) {
                roman += "M";
            }
            num %= 1000;
        }
        if (num >= 100) {
            temp = num / 100;
            if (temp == 9) {
                roman += "CM";
                num %= 100;
            }
            else if (temp == 4) {
                roman += "CD";
                num %= 100;
            }
            else if (num >= 500) {
                temp -= 5;
                roman += "D";
                while (temp > 0) {
                    roman += "C";
                    temp--;
                }
                num %= 100;
            }
            else {
                while (temp > 0) {
                    roman += "C";
                    temp--;
                }
                num %= 100;
            }

        }
        if (num >= 10) {
            temp = num / 10;
            if (temp == 9) {
                roman += "XC";
                num %= 10;
            }
            else if (temp == 4) {
                roman += "XL";
                num %= 10;
            }
            else if (num >= 50) {
                temp -= 5;
                roman += "L";
                while (temp > 0) {
                    roman += "X";
                    temp--;
                }
                num %= 10;
            }
            else {
                while (temp > 0) {
                    roman += "X";
                    temp--;
                }
                num %= 10;
            }
        }
        if (num >= 0) {

            if (num == 9) {
                roman += "IX";

            }
            else if (num == 4) {
                roman += "IV";
            }
            else if (num >= 5) {
                num -= 5;
                roman += "V";
                while (num > 0) {
                    roman += "I";
                    num--;
                }

            }
            else {
                while (num > 0) {
                    roman += "I";
                    num--;
                }

            }
        }
        return roman;
    }
};