class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, prod = 1;
        int temp = n;
        while (temp != 0) {
            int dig = temp % 10;
            sum += dig;
            prod *= dig;
            temp /= 10;
        }

        return n % (sum + prod) == 0 ? true : false;
    }
};