class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        int count;
        vector<vector<int>> answer(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                count = 0;
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        if ((x == 0 && y == 0) || i + x < 0 || i + x >= m || j + y < 0 || j + y >= n) continue;
                        if (board[i + x][j + y] == 1) count++;
                    }
                }
                if (board[i][j] == 0 && count == 3) {
                    answer[i][j] = 1;
                }
                else if (board[i][j] == 1 && count < 2) {
                    answer[i][j] = 0;
                }
                else if (board[i][j] == 1 && count > 3) {
                    answer[i][j] = 0;
                }
                else {
                    answer[i][j] = board[i][j];
                }
            }
        }
        board = answer;
    }
};