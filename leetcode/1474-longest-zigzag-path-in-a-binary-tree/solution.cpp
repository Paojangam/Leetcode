/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int longestZigZag(TreeNode* r) {
        int m = 0;
        dfs(r,true,0,m);
        dfs(r,false,0,m);
        return m;
    }
private:
    void dfs(TreeNode* n,bool l,int len,int &m){
        if(!n) return;
        m = max(m,len);
        if(l){
            dfs(n->left,false,len+1,m);
            dfs(n->right,true,1,m);
        } else {
            dfs(n->right,true,len+1,m);
            dfs(n->left,false,1,m);
        }
    }
};

