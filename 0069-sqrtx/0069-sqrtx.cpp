class Solution {
public:
    int mySqrt(int x) {
        int start = 1, end = x;
        int ans = 0;

        while(start <= end) {
            long long mid = start + (end - start) / 2;
            long long square = mid * mid;

            if(square == x) {
                return mid;
            } else if(square > x) {
                end = mid - 1;
            } else {
                start = mid + 1;
                ans = mid;
            }
        }

        return ans;
    }
};