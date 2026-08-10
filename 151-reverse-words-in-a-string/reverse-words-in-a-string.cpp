class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        string ans = "";
        string wd = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] != ' ') {
                wd += s[i];
            }
            else {
                if (wd != "") {
                    reverse(wd.begin(), wd.end());
                    ans += wd + " ";
                    wd = "";
                }
            }
        }

        // Last word
        if (wd != "") {
            reverse(wd.begin(), wd.end());
            ans += wd;
        }

        // Remove extra space at end
        if (ans.back() == ' ')
            ans.pop_back();

        return ans;
    }
};