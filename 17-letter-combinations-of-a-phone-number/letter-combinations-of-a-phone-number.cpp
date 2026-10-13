class Solution {
public:

    string keypad[10] = {
        "",     // 0
        "",     // 1
        "abc",  // 2
        "def",  // 3
        "ghi",  // 4
        "jkl",  // 5
        "mno",  // 6
        "pqrs", // 7
        "tuv",  // 8
        "wxyz"  // 9
    };

    void solve(int index, string digits, string current,
               vector<string>& ans) {

        // All digits processed
        if (index == digits.length()) {
            ans.push_back(current);
            return;
        }

        // Get letters for current digit
        int digit = digits[index] - '0';

        string letters = keypad[digit];

        // Try every letter
        for (char ch : letters) {

            // Choose
            current.push_back(ch);

            // Move to next digit
            solve(index + 1, digits, current, ans);

            // Backtrack
            current.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        vector<string> ans;

        if (digits.empty())
            return ans;

        solve(0, digits, "", ans);

        return ans;
    }
};