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
    int maxLevelSum(TreeNode* r) {
        if(!r) return 0;
        queue<TreeNode*> q;q.push(r);
        int lvl=0,mx=INT_MIN,res=0;
        while(!q.empty()){
            int n=q.size(),s=0;lvl++;
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();q.pop();
                s+=t->val;
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
            if(s>mx){mx=s;res=lvl;}
        }
        return res;
    }
};

