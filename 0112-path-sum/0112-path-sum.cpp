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
    bool hasPathSum(TreeNode* root, int targetSum) {
       // return false if the root is nullptr
        if(!root) return false;
        // if it reaches to the end and the val is equal to targetSum, return true
        if(!root->left && !root->right && root->val == targetSum) return true;
        // otherwise, we traverse left node and right node with the new targetSum `targetSum - root.val`
        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum-root->val);
    }  
    
};