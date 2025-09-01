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
    int goodNodes(TreeNode* root) {
        int ans = 0;
        count(root, INT_MIN, ans);
        return ans;
    }
private:
    void count(TreeNode* node, int mx, int &ans){
        if(!node) return;
        if(node->val >= mx) ans++;
        mx = max(mx, node->val);
        count(node->left, mx, ans);
        count(node->right, mx, ans);
    }
};

