class Solution {
public:
    long long countCommas(long long n) {
        long long count = 0;

        if (n < 1000) {
            return 0;
        }

        long long m = 1000;

        while (m <= n) {
            count += n - m + 1;
            m *= 1000;
        }

        return count;
    }
};