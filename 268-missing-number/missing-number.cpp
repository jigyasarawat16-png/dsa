class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int s = 0;

        int f = n * (n + 1) / 2;

        for(int i = 0; i < nums.size(); i++) {
            s += nums[i];
        }

        return f - s;
    }
};