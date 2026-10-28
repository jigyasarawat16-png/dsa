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
    void ls(TreeNode* root,int &s){
        if(root==nullptr){
            return;
        }
        if (root->left != nullptr &&root->left->left == nullptr &&root->left->right == nullptr) {
            s += root->left->val;
        }
        ls(root->left,s);
        ls(root->right,s);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int s=0;
        ls(root,s);
        return s;

        
    }
};