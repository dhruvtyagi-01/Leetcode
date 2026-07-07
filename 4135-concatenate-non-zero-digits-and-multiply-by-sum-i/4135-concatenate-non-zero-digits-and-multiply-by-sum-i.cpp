class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0, sum = 0, pow = 1;

        while (n != 0) {
            long long rem = n % 10;
            if (rem != 0) {
                sum += rem;
                x += pow * rem;
                pow *= 10;
            }
            n /= 10;
        }

        return x * sum;
    }
};