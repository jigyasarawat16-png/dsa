class Solution {
public:
    bool canAliceWin(int n) {
        int need = 10;
        bool isAliceTurn = true;

        while (need > 0) {
            if (n < need) {
                return !isAliceTurn;
            }
            n = n - need;
            need--;
            isAliceTurn = !isAliceTurn;
        }
        return false;
    }
};