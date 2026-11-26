class Solution {
public:
    bool canAliceWin(int n) {
        int need = 10;
        int moves = 0;

        while (n >= need) {
            n -= need;
            need--;
            moves++;
        }

        return moves % 2 == 1;
    }
};