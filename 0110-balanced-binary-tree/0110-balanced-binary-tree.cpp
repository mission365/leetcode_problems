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
    int height(TreeNode *root){
        if(root == NULL) return 0;
        return max(height(root->left), height(root->right))+1;
    }
    void inOrder(TreeNode* root, bool &ans){
        if(root != NULL){
            inOrder(root->left,ans);
        
        int lh = height(root->left);
        int rh = height(root->right);
        if(abs(lh-rh)>1){
            ans = ans && false;
        }
        
        inOrder(root->right,ans);
        }
    }
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        inOrder(root, ans);
        return ans;
    }
};