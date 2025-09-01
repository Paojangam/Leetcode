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
class Solution{
public:
    TreeNode* deleteNode(TreeNode* r,int k){
        if(!r)return nullptr;
        if(k<r->val)r->left=deleteNode(r->left,k);
        else if(k>r->val)r->right=deleteNode(r->right,k);
        else{
            if(!r->left)return r->right;
            if(!r->right)return r->left;
            TreeNode* t=r->right;
            while(t->left)t=t->left;
            r->val=t->val;
            r->right=deleteNode(r->right,t->val);
        }
        return r;
    }
};

