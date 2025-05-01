/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int *a = (int*)malloc(100*sizeof(int));
    *returnSize = 0;
    void pre(struct TreeNode *root){
        if(root==NULL) return ;
        a[(*returnSize)++]=root->val;
        pre(root->left);
        pre(root->right);
    }
    pre(root);
    return a;
}