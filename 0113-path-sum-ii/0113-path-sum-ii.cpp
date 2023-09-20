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
    void solve(TreeNode* root, int target,vector<vector<int>> &ans,int sum, vector<int> temp) {
        if(root == NULL) return;
        sum+=root->val;
        temp.push_back(root->val);
        if(root->left == NULL && root->right == NULL && sum == target) {
            ans.push_back(temp);
            return;
        }
        solve(root->left,target,ans,sum,temp);
        solve(root->right,target,ans,sum,temp);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        vector<int> temp;
        solve(root,targetSum,ans,0,temp);
        return ans;
    }
};