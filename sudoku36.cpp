class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool check = true;
        int i = 0, j = 0;
        while (i < 9) {
            char num = board[i][j];

            if (num != '.') {
                for (int y = j + 1; y < 9; y++) {
                    if (num == board[i][y]) {
                        return false;
                    }
                }
                for (int x = i + 1; x < 9; x++) {
                    if (num == board[x][j]) {
                        return false;
                    }
                }
                int boxStartRow = (i / 3) * 3;
                int boxStartCol = (j / 3) * 3;
                for (int x = boxStartRow; x < boxStartRow + 3; x++) {
                    for (int y = boxStartCol; y < boxStartCol + 3; y++) {
                        if (x == i && y == j) {
                            continue;
                        }
                        if (num == board[x][y]) {
                            return false;
                        }
                    }
                }


            }
            if (j < 8) {
                j++;
            }
            else {
                i++;
                j = 0;
            }

        }
        return true;
    }
};