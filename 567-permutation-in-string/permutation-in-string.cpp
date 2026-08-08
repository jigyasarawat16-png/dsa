class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.size() > s2.size())
            return false;

        int freq1[26] = {0};
        int freq2[26] = {0};

        // Frequency of characters in s1
        for (int i = 0; i < s1.size(); i++) {
            freq1[s1[i] - 'a']++;
        }

        int windowSize = s1.size();

        // First window
        for (int i = 0; i < windowSize; i++) {
            freq2[s2[i] - 'a']++;
        }

        // Check first window
        if (equal(freq1, freq1 + 26, freq2))
            return true;

        // Slide the window
        for (int i = windowSize; i < s2.size(); i++) {

            // Add new character
            freq2[s2[i] - 'a']++;

            // Remove old character
            freq2[s2[i - windowSize] - 'a']--;

            // Compare frequencies
            if (equal(freq1, freq1 + 26, freq2))
                return true;
        }

        return false;
    }
};