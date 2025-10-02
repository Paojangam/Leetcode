class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int top=0; int left=0;
        int buttom=m-1; int right=n-1;
        vector<int>result;
        while(left<=right && top <= buttom){
            //to rifht
            for(int i=left;i<=right;i++){
                result.push_back(matrix[top][i]);
            }
            top++;
            //to buttom
            for(int i=top;i<=buttom;i++){
                result.push_back(matrix[i][right]);
            }
            right--;
            // to left
            if(top<=buttom){
            for(int i=right;i>=left;i--){
                result.push_back(matrix[buttom][i]);
            }
            buttom--;
            }
            //to top
            if(left<=right){
            for(int i=buttom;i>=top;i--){
                result.push_back(matrix[i][left]);
            }
            left++;}
        }
            return result;

    }
};

