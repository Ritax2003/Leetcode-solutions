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
    int ans;
    void solve(TreeNode* root , int maxi , int  mini){
        if(root==NULL){
            ans = max(ans , abs(maxi - mini));
            return;
        }
        maxi = max(maxi , root->val);
        mini = min(mini, root->val);
        solve(root->left , maxi , mini);
        solve(root->right , maxi , mini);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(!root) return 0;
        ans = 0;
        solve(root , root->val , root->val);
        return ans;
    }
};