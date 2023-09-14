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
    TreeNode* head = new TreeNode(0); //here we use head for taking 0 as a root.
    TreeNode* ptr = head; // we create ptr for track the head.
    
    void solve(TreeNode* root) {
        if(root==NULL) return;
        
        solve(root->left);
        head->right = new TreeNode(root->val);
        head = head->right;
        solve(root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        solve(root);
        return ptr->right;
    }
};