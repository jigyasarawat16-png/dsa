class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (curr == nums[i]) {
                nums.erase(nums.begin() + i);
                i--;
            } else {
                curr = nums[i];
            }
        }

        int k = nums.size();

        return k;
    }
};