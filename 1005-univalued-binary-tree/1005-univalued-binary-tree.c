/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isUnivalTree(struct TreeNode* root) {
int k=1;
int data = root->val;
void is(struct TreeNode *root){
    if(root==NULL)return;
    is(root->left);
    if(root->val!=data){
        k=0;
        return;
    }
    is(root->right);
}
is(root);
return k;
}