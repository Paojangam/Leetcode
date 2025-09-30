class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        int orig = image[sr][sc];
        if (orig == color) return image;
        
        dfs(image, sr, sc, m, n, orig, color);
        return image;
    }

private:
    void dfs(vector<vector<int>>& image, int r, int c, int m, int n, int orig, int color) {
        if (r < 0 || r >= m || c < 0 || c >= n) return;
        if (image[r][c] != orig) return;

        image[r][c] = color;

        dfs(image, r - 1, c, m, n, orig, color);
         
        dfs(image, r + 1, c, m, n, orig, color);
        dfs(image, r, c - 1, m, n, orig, color);
        dfs(image, r, c + 1, m, n, orig, color);
    }
};

