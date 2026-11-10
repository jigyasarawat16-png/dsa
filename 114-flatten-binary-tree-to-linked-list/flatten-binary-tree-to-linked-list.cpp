class Solution {
public:
    TreeNode* nr = NULL;

    void flatten(TreeNode* root) {

        nr = NULL;

        solve(root);
    }

    void solve(TreeNode* root) {

        if(root == NULL)
            return;

        solve(root->right);
        solve(root->left);

        root->left = NULL;
        root->right = nr;

        nr = root;
    }
};