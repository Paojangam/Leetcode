class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>allarea;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                   int area=dfs(grid,i,j,m,n);
                   allarea.push_back(area);
                }
                else{ continue;}
            }
        }
        if (allarea.empty()) return 0;            
        int maxarea = *max_element(allarea.begin(), allarea.end());

        return maxarea;
    }
    private:
    int dfs(vector<vector<int>>&grid, int row,int col, int m, int n){
        if(row<0 || col<0 || row>=m || col>=n || grid[row][col]!=1) return 0;
        grid[row][col] = 0;
        int count = 1;
       count+= dfs(grid, row,col+1,m,n);
       count+= dfs(grid, row,col-1,m,n);
       count+= dfs(grid, row+1,col,m,n);
       count+= dfs(grid, row-1,col,m,n);
        return count;

    }
};
