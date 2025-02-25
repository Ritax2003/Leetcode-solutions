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
    int diameter =0;
    int helper(TreeNode* node){
        if(node == nullptr) return 0; // Base case: if node is null, return 0
        int leftdepth = helper(node->left); // Get depth of left subtree
        int rightdepth = helper(node->right); // Get depth of right subtree
         // Calculate diameter at this node (number of edges)
        int currentdiameter = leftdepth+rightdepth;
        // Update the maximum diameter found so far
        diameter = max(diameter, currentdiameter);
        // Return the depth of this subtree
        return max(leftdepth, rightdepth)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        return diameter;
    }
};