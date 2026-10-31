class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {

        queue<TreeNode*> q;
        q.push(root);

        vector<long long> ans;

        while (!q.empty()) {

            int n = q.size();
            long long sum = 0;

            for (int i = 0; i < n; i++) {

                TreeNode* curr = q.front();
                q.pop();

                sum += curr->val;

                if (curr->left)
                    q.push(curr->left);

                if (curr->right)
                    q.push(curr->right);
            }

            ans.push_back(sum);
        }

        if (k > ans.size())
            return -1;

        sort(ans.rbegin(), ans.rend());

        return ans[k - 1];
    }
};