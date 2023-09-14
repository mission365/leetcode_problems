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
    
    bool checkTree(TreeNode* root) {
        if(root==NULL) return false;
        int x = root->left->val;
        int y = root->right->val;
        int z = root->val;
        if(z == x+y) return true;
        else return false;
    }
};