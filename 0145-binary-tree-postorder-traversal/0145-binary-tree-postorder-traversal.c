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
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int *a = (int*)malloc(100*sizeof(int));
    *returnSize = 0;
    void post(struct TreeNode *root){
        if(root==NULL) return ;
        post(root->left);
        post(root->right);
          a[(*returnSize)++]=root->val;
    }
    post(root);
    return a;
    
}