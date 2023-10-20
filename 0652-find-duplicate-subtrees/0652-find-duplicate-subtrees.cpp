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
    vector<TreeNode*>ans;
    unordered_map<string,int>mp;
    string fn(TreeNode* root){
        if(root == NULL) return "";
        string left = fn(root->left);
        string right = fn(root->right);
        string s = "("+left+to_string(root->val)+right+")";
        if(mp[s]==1) ans.push_back(root);
        mp[s]++;
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        ans.clear(); mp.clear();
        fn(root);
        return ans;
    }
};