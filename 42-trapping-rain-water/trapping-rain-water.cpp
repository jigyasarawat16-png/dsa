class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        vector<int> l(n);
        vector<int> r(n);

        int left = 0;
        int right = 0;
        int ans = 0;

        // Build left maximum array
        for (int i = 0; i < n; i++) {
            left = max(left, height[i]);
            l[i] = left;
        }

        // Build right maximum array
        for (int i = n - 1; i >= 0; i--) {
            right = max(right, height[i]);
            r[i] = right;
        }

        // Calculate trapped water
        for (int i = 0; i < n; i++) {
            ans += min(l[i], r[i]) - height[i];
        }

        return ans;
    }
};