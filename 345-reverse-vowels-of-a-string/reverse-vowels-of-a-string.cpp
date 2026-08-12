class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' ||
               c == 'O' || c == 'U';
    }

    string reverseVowels(string s) {
        int a = 0;
        int b = s.size() - 1;

        while (a < b) {

            // Move a until it finds a vowel
            while (a < b && !isVowel(s[a])) {
                a++;
            }

            // Move b until it finds a vowel
            while (a < b && !isVowel(s[b])) {
                b--;
            }

            // Swap the vowels
            swap(s[a], s[b]);

            a++;
            b--;
        }

        return s;
    }
};