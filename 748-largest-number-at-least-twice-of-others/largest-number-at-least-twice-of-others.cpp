class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        vector<pair<int,int>> ans;

        for(int i = 0; i < nums.size(); i++) {
            ans.push_back({nums[i], i});
        }

        sort(ans.begin(), ans.end());

        int n = nums.size();

        if(ans[n-1].first >= 2 * ans[n-2].first) {
            return ans[n-1].second;
        }

        return -1;
    }
};