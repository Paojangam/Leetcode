class Solution {
public:
    unordered_map<int, int> inorderIndexMap;
    int preorderIndex = 0;

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); ++i) {
            inorderIndexMap[inorder[i]] = i;
        }
        return buildSubTree(preorder, 0, inorder.size() - 1);
    }

    TreeNode* buildSubTree(vector<int>& preorder, int inLeft, int inRight) {
        if (inLeft > inRight) return nullptr;

        int rootVal = preorder[preorderIndex++];
        TreeNode* root = new TreeNode(rootVal);

        int rootIndex = inorderIndexMap[rootVal];

        root->left = buildSubTree(preorder, inLeft, rootIndex - 1);
        root->right = buildSubTree(preorder, rootIndex + 1, inRight);

        return root;
    }
};

