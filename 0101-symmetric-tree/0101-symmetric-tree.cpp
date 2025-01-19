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
    bool isSymmetrich(TreeNode* n1, TreeNode* n2){
        if(n1==NULL and n2==NULL) return true;
        if(n1==NULL or n2==NULL) return false;
        return n1->val == n2->val and isSymmetrich(n1->left,n2->right) and isSymmetrich(n1->right,n2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return isSymmetrich(root->left,root->right);
    }
};