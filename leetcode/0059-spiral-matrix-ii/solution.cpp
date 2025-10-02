class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n,0));
        int left=0; int right=n-1;
        int top=0; int buttom=n-1;
        int num=1; int maxNum=n*n;
        while(num<=maxNum){
        //to right
        for(int i=left;i<=right  && num <= maxNum;i++){
            matrix[top][i]=num++;
        } top++;
        // top buttom
        for(int i=top;i<=buttom  && num <= maxNum;i++){
            matrix[i][right]=num++;
        } right--;
        //to left
        for(int i=right;i>=left  && num <= maxNum;i--){
            matrix[buttom][i]=num++;
        } buttom--;
        //to top
        for(int i=buttom;i>=top  && num <= maxNum;i--){
            matrix[i][left]=num++;
        }left++;
     }
        return matrix;
    }
};
