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
    bool isSameTree(TreeNode* p, TreeNode* q) {
     if (!p && !q) return true;
        // if both nodes are null,then both are technically equal

        if ((!p || !q) || p->val != q->val) return false;
        // if either of them is null then they aren't equal, or if their values are not equal, we return false

        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        // we break the tree into smaller parts ie, trees from the left and right nodes and if either of them returns false, then we know there is a difference in the trees somewhere down there]
    }
};