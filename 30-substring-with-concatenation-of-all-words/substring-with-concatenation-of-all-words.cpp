
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        vector<int> ans;

        int n = words.size();
        int m = words[0].size();
        int windowSize = n * m;

        if (s.size() < windowSize) return ans;

        unordered_map<string, int> mp;

        for (string word : words) {
            mp[word]++;
        }

        // Try different starting offsets
        for (int i = 0; i < m; i++) {

            unordered_map<string, int> seen;

            int left = i;
            int count = 0;

            for (int right = i; right + m <= s.size(); right += m) {

                string word = s.substr(right, m);

                if (mp.find(word) != mp.end()) {

                    seen[word]++;
                    count++;

                    while (seen[word] > mp[word]) {

                        string leftWord = s.substr(left, m);

                        seen[leftWord]--;
                        count--;
                        left += m;
                    }

                    if (count == n) {
                        ans.push_back(left);

                        string leftWord = s.substr(left, m);
                        seen[leftWord]--;
                        count--;
                        left += m;
                    }
                }
                else {
                    seen.clear();
                    count = 0;
                    left = right + m;
                }
            }
        }

        return ans;
    }
};
