class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long m = LLONG_MIN;

        // 1st maximum
        for (int x : nums) {
            m = max(m, (long long)x);
        }

        long long first = m;
        m = LLONG_MIN;

        // 2nd maximum
        for (int x : nums) {
            if (x < first) {
                m = max(m, (long long)x);
            }
        }

        if (m == LLONG_MIN)
            return first;

        long long second = m;
        m = LLONG_MIN;

        // 3rd maximum
        for (int x : nums) {
            if (x < second) {
                m = max(m, (long long)x);
            }
        }

        if (m == LLONG_MIN)
            return first;

        return m;
    }
};