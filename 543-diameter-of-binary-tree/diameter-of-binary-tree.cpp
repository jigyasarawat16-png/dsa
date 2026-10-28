
class Solution {
public:
    int diameter = 0;

    int c(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int l = c(root->left);
        int r = c(root->right);

        diameter = max(diameter, l + r);

        return max(l, r) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        c(root);
        return diameter;
    }
};
