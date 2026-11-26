class Solution {
public:
    int splitNum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());
        
        int num1 = 0;
        int num2 = 0;
        
        for (int i = 0; i < s.size(); i++) {
            int digit = s[i] - '0'; // char '2' ko int 2 banane ke liye
            
            if (i % 2 == 0) {
                num1 = num1 * 10 + digit;
            } else {
                num2 = num2 * 10 + digit;
            }
        }
        
        return num1 + num2;
    }
};