/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int rangeSumBST(struct TreeNode* root, int low, int high) {
    int sum=0;
    void sum1(struct TreeNode *root){
        if(root==NULL) return;
        sum1(root->left);
        if(root->val>=low&&root->val<=high) sum+=root->val;
        sum1(root->right);
    }
    sum1(root);
    return sum;
}