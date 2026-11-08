class Solution {
public:
    void pp(Node* root, vector<int>& ans) {
        if (root == nullptr) {
            return;
        }

        for (Node* child : root->children) {
            pp(child, ans);
        }

        ans.push_back(root->val);
    }

    vector<int> postorder(Node* root) {
        vector<int> ans;
        pp(root, ans);
        return ans;
    }
};