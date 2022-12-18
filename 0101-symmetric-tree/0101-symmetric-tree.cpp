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
     bool chk(TreeNode* tree1, TreeNode* tree2){
        if (tree1==NULL && tree2==NULL)return true;
        if (!tree1 && tree2)return false;
        if (!tree2 && tree1)return false;
        if (tree1->val != tree2->val)return false;
        return (chk(tree1->left,tree2->right) && chk(tree1->right,tree2->left));
    }
    bool isSymmetric(TreeNode* root) {
        if (root==NULL)return true;
        if (root->right==NULL && root->left==NULL)return true;
        if (root->left && root->right==NULL)return false;
        if (root->right && root->left==NULL)return false;
        // non null value for nodes
        return chk(root->left,root->right);
    }
};