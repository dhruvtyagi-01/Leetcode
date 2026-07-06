class Solution {
public:
    int addDigits(int num) {
        int sum = 1 + (num - 1) % 9;
        return sum;
    }
};