class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxDiagonalSquared = 0;
        int maxArea = 0;

        for (auto &rect : dimensions) {
            int length = rect[0];
            int width = rect[1];
            int diagonalSquared = length * length + width * width;
            int area = length * width;

            if (diagonalSquared > maxDiagonalSquared) {
                maxDiagonalSquared = diagonalSquared;
                maxArea = area;
            } 
            else if (diagonalSquared == maxDiagonalSquared) {
                if (area > maxArea) {
                    maxArea = area;
                }
            }
        }

        return maxArea;
    }
};

