class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
         vector<vector<int>>columns;
         int n=grid.size();
         for(int col=0;col<n;col++){
            vector<int>column;
            for(int row=0;row<n;row++){
               column.push_back(grid[row][col]);
            }columns.push_back(column);
         } 
          int count=0; 
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i]==columns[j]){
                    count++;
                }
            }
         }
 return count;
    }
};
