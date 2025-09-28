class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid1.size();
        int n = grid1[0].size();
        int ans = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid2[i][j] == 1) {
                    if (dfs(grid1, grid2, i, j, m, n)) ans++;
                }
            }
        }
        return ans;
    }

private:
    bool dfs(vector<vector<int>>& g1, vector<vector<int>>& g2, int i, int j, int m, int n) {
        if (i < 0 || j < 0 || i >= m || j >= n || g2[i][j] == 0) return true;

        bool validHere = (g1[i][j] == 1);
        g2[i][j] = 0;

        bool down  = dfs(g1, g2, i + 1, j, m, n);
        bool up    = dfs(g1, g2, i - 1, j, m, n);
        bool right = dfs(g1, g2, i, j + 1, m, n);
        bool left  = dfs(g1, g2, i, j - 1, m, n);

        return validHere & down & up & right & left;
    }
};

