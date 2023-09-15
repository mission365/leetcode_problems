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
    void solve(TreeNode* root, vector<int> &ans) {
        if(root==NULL) return;
        if(root->left == NULL && root->right == NULL) ans.push_back(root->val);
        
        solve(root->left, ans);
        solve(root->right, ans);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL || root2 == NULL) return false;
        vector<int> a,b;
        solve(root1, a);
        solve(root2, b);
        if(a==b) return true;
        else return false;
    }
};