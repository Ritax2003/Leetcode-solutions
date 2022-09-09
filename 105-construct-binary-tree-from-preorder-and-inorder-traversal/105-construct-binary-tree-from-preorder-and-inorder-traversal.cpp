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
    TreeNode *helper(vector<int> &preorder,vector<int> &inorder,int preS,int preE,int inS,int inE){
        if(inS>inE){
            return NULL;
        }
        int rootdata = preorder[preS];
        int rootindex = 0;
        for(int i = inS;i<=inE;i++){
            if(inorder[i]==rootdata){
                rootindex = i;
                break;
            }
        }
        int LeftinS = inS;
        int LeftinE = rootindex-1;
        int RightinS = rootindex +1;
        int RightinE = inE;
        int LeftpreS = preS+1;
        int LeftpreE = LeftpreS + (LeftinE - LeftinS);
        int RightpreS = LeftpreE+1;
        int RightpreE = preE;
        
        TreeNode *root = new TreeNode(rootdata);
        root->left = helper(preorder,inorder,LeftpreS,LeftpreE,LeftinS,LeftinE);
        root->right = helper(preorder,inorder,RightpreS,RightpreE,RightinS,RightinE);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       int size = preorder.size();
        TreeNode *root = helper(preorder,inorder,0,size-1,0,size-1);
         return root;
    }
};