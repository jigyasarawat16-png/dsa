class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;

        for(int i = 0; i < operations.size(); i++) {

            if(operations[i] == "C") {
                ans.pop_back();
            }
            else if(operations[i] == "D") {
                ans.push_back(ans.back() * 2);
            }
            else if(operations[i] == "+") {
                int n = ans.size();
                ans.push_back(ans[n-1] + ans[n-2]);
            }
            else {
                ans.push_back(stoi(operations[i]));
            }
        }

        int sum = 0;
        for(int x : ans) {
            sum += x;
        }

        return sum;
    }
};