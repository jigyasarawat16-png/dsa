class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;

        string ans = "";

        while (i >= 0 || j >= 0 || carry) {

            int a = 0;
            int b = 0;

            if (i >= 0) {
                a = num1[i] - '0';
                i--;
            }

            if (j >= 0) {
                b = num2[j] - '0';
                j--;
            }

            int sum = a + b + carry;

            ans += (sum % 10) + '0';

            carry = sum / 10;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
