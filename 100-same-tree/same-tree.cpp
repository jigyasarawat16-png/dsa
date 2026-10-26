
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Both nodes are NULL
        if (p == NULL && q == NULL)
            return true;

        // Only one node is NULL
        if (p == NULL || q == NULL)
            return false;

        // Check values and recursively compare children
        if (p->val != q->val)
            return false;

        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};
