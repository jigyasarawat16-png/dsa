
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int lh = 0, rh = 0;
        TreeNode* l = root;
        TreeNode* r = root;

        while (l != nullptr) {
            lh++;
            l = l->left;
        }

        while (r != nullptr) {
            rh++;
            r = r->right;
        }

        if (lh == rh) {
            return (1 << lh) - 1;
        }

        return 1 + countNodes(root->left)
                 + countNodes(root->right);
    }
};
