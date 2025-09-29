class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int maxfish=0;
        vector<int>all;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]>0) {
                int fish=dfs(grid,i,j,m,n);
                 maxfish=max(maxfish,fish);
                }
            }
        }
      return maxfish;  
    }
    private:
    int dfs(vector<vector<int>>&grid, int row, int col, int m, int n){
         if (row < 0 || row >= m || col < 0 || col >= n || grid[row][col] == 0) return 0;
        int count=grid[row][col];
        grid[row][col]=0;
        count+=dfs(grid,row,col-1,m,n);
        count+=dfs(grid,row,col+1,m,n);
        count+=dfs(grid,row+1,col,m,n);
        count+=dfs(grid,row-1,col,m,n);

return count;
    }
};
