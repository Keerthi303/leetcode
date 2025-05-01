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
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *a=(int*)malloc(100*sizeof(int));
    *returnSize=0;
     void in(struct TreeNode *root){
        if(root==NULL) return;
    in(root->left);
     a[(*returnSize)++]=root->val;
     in(root->right);
     }
     in(root);
    return a;
}