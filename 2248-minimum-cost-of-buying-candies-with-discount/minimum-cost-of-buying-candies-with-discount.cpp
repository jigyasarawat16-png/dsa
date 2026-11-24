class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());

        int n = cost.size();
        int c = 0;

        for(int i = 0; i < n; i++) {
            c += cost[i];
        }

        for(int i = 2; i < n; i += 3) {
            c -= cost[i];
        }

        return c;
    }
};