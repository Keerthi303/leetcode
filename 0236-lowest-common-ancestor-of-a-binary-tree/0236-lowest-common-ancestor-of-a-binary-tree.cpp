/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* Lca(TreeNode* root,int p, int q){
        if(root == NULL ) return NULL;
        if(root->val == p || root->val ==q) return root;
        TreeNode* Left = Lca(root->left,p,q);
        TreeNode* Right = Lca(root->right,p,q);
        if(Left != NULL && Right != NULL)return root;
        if(Right == NULL && Left != NULL) return Left;
        return Right;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return Lca(root,p->val,q->val);
    }
};