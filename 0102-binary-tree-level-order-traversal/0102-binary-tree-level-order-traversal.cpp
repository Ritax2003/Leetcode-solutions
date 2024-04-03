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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        // base case
        if(root==NULL){
            return ans;
        }
        // declaring a queue of pointers to TreeNode to perform level order traversal
        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight=true;
        while(!q.empty()){
            int size=q.size();
            vector<int> store(size);
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
    
                int index=i;
                store[index]=node->val;

                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            ans.push_back(store);
        }
        return ans;
    }
};