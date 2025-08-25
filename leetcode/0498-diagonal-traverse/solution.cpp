class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int row = 0, col = 0;
        bool up = true;
        vector<int> arr;

        while (row < m && col < n) {
            if (up) {
                while (row > 0 && col < n - 1) {
                    arr.push_back(mat[row][col]);
                    row--;
                    col++;
                }
                arr.push_back(mat[row][col]); 

                if (col == n - 1) row++; 
                else col++;             
            } else {
                while (row < m - 1 && col > 0) {
                    arr.push_back(mat[row][col]);
                    row++;
                    col--;
                }
                arr.push_back(mat[row][col]);

                if (row == m - 1) col++; 
                else row++;            
            }

            up = !up;
        }

        return arr;
    }
};

