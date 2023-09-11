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
    
    void solve(TreeNode* root, int temp , int &ans) {
        if(root == NULL) return ;
        temp+=1;
        if(root->left == NULL && root->right == NULL){
            if(ans>=temp) ans = temp;
            return ;
        }
        
        solve(root->left, temp, ans);
        solve(root->right, temp, ans);       
    }
    
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int temp = 0;
        int ans = INT_MAX;
        solve(root, temp, ans);
        return ans;
    }
};