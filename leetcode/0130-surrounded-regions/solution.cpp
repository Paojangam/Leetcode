class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty()) return;

        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            if(board[i][0]=='O') marksafe(board,i,0,m,n);
            if(board[i][n-1]=='O') marksafe(board,i,n-1,m,n);
        }
        for(int j=0;j<n;j++){
            if(board[0][j]=='O') marksafe(board,0,j,m,n);
            if(board[m-1][j]=='O') marksafe(board,m-1,j,m,n);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O') board[i][j]='X';
                else if(board[i][j]=='S') board[i][j]='O';
            }
        }
        
    }
    private:
    void marksafe(vector<vector<char>>&board,int i,int j,int m,int n){
        if(i<0||j<0||i>=m||j>=n) return;
        if(board[i][j]!='O') return;
        board[i][j]='S';
        marksafe(board,i+1,j,m,n);
        marksafe(board,i-1,j,m,n);
        marksafe(board,i,j+1,m,n);
        marksafe(board,i,j-1,m,n);

    }
};
