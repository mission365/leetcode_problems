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
    
    TreeNode* solve( vector<int> &nums, int lb, int ub) {
        if(lb>ub) return NULL;
        
        int mid = (lb+ub)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = solve(nums, lb, mid-1);
        root->right = solve(nums, mid+1, ub);
        
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
//nums.clear();
        int ub = nums.size()-1;
        return solve(nums, 0, ub);
        
    }
};