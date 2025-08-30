class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      //for the damned rows::
      for(int i=0;i<9;i++){
        unordered_set<char>seen;
        for(int j=0;j<9;j++){
           char ch=board[i][j];
           if(ch=='.')continue;
           if(seen.count(ch)) return false;
           seen.insert(ch);
        }
      }
      //now for the darn columns
      for(int j=0;j<9;j++){
        unordered_set<char>seen;
        for(int i=0;i<9;i++){
           char ch=board[i][j];
           if(ch=='.')continue;
           if(seen.count(ch)) return false;
           seen.insert(ch);
        }
      }
      //now for the boxes . since it is mentioned that it is 9*9
      //we're just gona define the starting points ahead
       vector<pair<int,int>> start = {
            {0,0}, {0,3}, {0,6},   
            {3,0}, {3,3}, {3,6},   
            {6,0}, {6,3}, {6,6}    
        };
     for(auto [sr,sc] : start){
        unordered_set<char>seen;
        for(int r=sr;r<sr+3;r++){
            for(int c=sc;c<sc+3;c++){
                char ch=board[r][c];
                if(ch=='.') continue;
                if(seen.count(ch)) return false;
                seen.insert(ch);
            }
        }
     }
     return true;
    }
      

};

