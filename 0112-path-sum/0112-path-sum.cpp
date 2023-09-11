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
    
    bool solve(TreeNode* root, int targetSum,int temp) {
        
        if(root == NULL) return false;
        
        temp+=root->val;
        
        if(root->left == NULL && root->right == NULL) {
            if(temp == targetSum) return true;
            else return false;
        }
        
        return solve(root->left, targetSum,temp) || solve(root->right, targetSum,temp);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;
        int temp = 0;
        return solve(root, targetSum, temp);
        
    }
};