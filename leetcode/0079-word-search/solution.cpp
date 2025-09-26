class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
      int m=board.size();
      int n=board[0].size();
      for(int r=0;r<m;r++){
        for(int c=0;c<n;c++){
            if(dfs(board,r,c,word,0)) return true;
        }
      }
      return false;
    }
    private:
    bool dfs(vector<vector<char>>&board,int r, int c, string &word, int idx){
        if(idx==word.size()) return true;
        if (r < 0 || c < 0 || r >= (int)board.size() || c >= (int)board[0].size()
            || board[r][c] != word[idx]) return false;

        char saved=board[r][c];
        board[r][c]='#';
        bool found =dfs(board, r - 1, c, word, idx + 1) || 
                     dfs(board, r + 1, c, word, idx + 1) || 
                     dfs(board, r, c - 1, word, idx + 1) ||  
                     dfs(board, r, c + 1, word, idx + 1);   

  board[r][c]=saved;
  return found;
    }
};

