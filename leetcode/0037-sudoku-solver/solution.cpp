
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }

private:
    bool solve(vector<vector<char>>& board) {
        int r, c;
        if (!findEmpty(board, r, c)) return true;
        for (char ch = '1'; ch <= '9'; ++ch) {
            if (isValid(board, r, c, ch)) {
                board[r][c] = ch;
                if (solve(board)) return true;
                board[r][c] = '.';
            }
        }
        return false;
    }

    bool findEmpty(const vector<vector<char>>& board, int &row, int &col) {
        for (int r = 0; r < 9; ++r)
            for (int c = 0; c < 9; ++c)
                if (board[r][c] == '.') { row = r; col = c; return true; }
        return false;
    }

    bool isValid(const vector<vector<char>>& board, int row, int col, char ch) {
        for (int i = 0; i < 9; ++i) {
            if (board[row][i] == ch) return false;
            if (board[i][col] == ch) return false;
            int boxRow = (row / 3) * 3 + i / 3;
            int boxCol = (col / 3) * 3 + i % 3;
            if (board[boxRow][boxCol] == ch) return false;
        }
        return true;
    }
};
