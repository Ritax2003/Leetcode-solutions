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
    TreeNode *helper(vector<int> &in,vector<int> &post,int inS,int inE,int postS,int postE){
     if(inS>inE){
         return NULL;
     }   
        int rootdata = post[postE];
        int rootindex = 0;
        for(int i = inS;i<=inE;i++){
            if(in[i]==rootdata){
                rootindex = i;
                break;
            }
        }
        int leftinS = inS;
        int leftinE = rootindex-1;
        int rightinS = rootindex +1;
        int rightinE = inE;
        int leftpostS = postS;
        int leftpostE = leftpostS+(leftinE-leftinS);
        int rightpostS = leftpostE+1;
        int rightpostE = postE - 1;
        
        TreeNode *root = new TreeNode(rootdata);
        root->left = helper(in,post,leftinS,leftinE,leftpostS,leftpostE);
        root->right = helper(in,post,rightinS,rightinE,rightpostS,rightpostE);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int size = inorder.size();
        return helper(inorder,postorder,0,size-1,0,size-1);
    }
};