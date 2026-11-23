
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        
        unordered_set<string> st(banned.begin(), banned.end());
        unordered_map<string, int> mp;

        string word = "";
        int maxi = 0;
        string ans = "";

        // Convert paragraph to lowercase
        for (int i = 0; i < paragraph.size(); i++) {
            paragraph[i] = tolower(paragraph[i]);
        }

        // Extract words
        for (int i = 0; i <= paragraph.size(); i++) {

            if (i < paragraph.size() && isalpha(paragraph[i])) {
                word += paragraph[i];
            }
            else {
                if (word != "") {

                    if (st.find(word) == st.end()) {
                        mp[word]++;

                        if (mp[word] > maxi) {
                            maxi = mp[word];
                            ans = word;
                        }
                    }

                    word = "";
                }
            }
        }

        return ans;
    }
};
