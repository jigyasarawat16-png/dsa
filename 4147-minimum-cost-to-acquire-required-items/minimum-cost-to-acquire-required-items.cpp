class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth,
                          int need1, int need2) {

        int m = min(need1, need2);

        // Option 1: Buy everything separately
        long long a = 1LL * need1 * cost1 + 1LL * need2 * cost2;

        // Option 2: Buy only both items
        long long b = 1LL * max(need1, need2) * costBoth;

        // Option 3: Buy both items first, then remaining items
        long long c = 1LL * m * costBoth;

        if (need1 > need2) {
            c += 1LL * (need1 - m) * cost1;
        }
        else {
            c += 1LL * (need2 - m) * cost2;
        }

        return min({a, b, c});
    }
};