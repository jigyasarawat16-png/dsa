class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;

        for(char c : s) {
            freq[c]++;
        }

        int ans = 0;
        bool odd = false;

        for(auto it : freq) {
            ans += (it.second / 2) * 2;

            if(it.second % 2 == 1) {
                odd = true;
            }
        }

        if(odd) {
            ans++;
        }

        return ans;
    }
};