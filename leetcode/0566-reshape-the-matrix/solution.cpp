class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
         int m=mat.size();
         int n=mat[0].size();
         if(m*n!=r*c) return mat;
         vector<vector<int>>res(r,vector<int>(c));
         for(int ind=0;ind<m*n;ind++){
            int oldrow=ind/n;
            int oldcol=ind%n;
            int newrow=ind/c;
            int newcol=ind%c;
            res[newrow][newcol]=mat[oldrow][oldcol];
         }

         return res;
    }
};
