class Solution {
public:
    int longestValidParentheses(string s) {

        stack<int> st;
        st.push(-1);

        int ans = 0;

        for (int i = 0; i < s.length(); i++) {

            // If opening bracket
            if (s[i] == '(') {
                st.push(i);
            }

            // If closing bracket
            else {

                st.pop();

                // No matching opening bracket
                if (st.empty()) {
                    st.push(i);
                }

                // Valid parentheses found
                else {
                    ans = max(ans, i - st.top());
                }
            }
        }

        return ans;
    }
};