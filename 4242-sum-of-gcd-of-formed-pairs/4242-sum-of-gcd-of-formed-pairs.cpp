class Solution {
public:
    int gcd(int a, int b) {
        while (a != 0) {
            int temp = a;
            a = b % a;
            b = temp;
        }
        return b;
    }

    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd(n);
        int mx = INT_MIN;

        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            prefixGcd[i] = gcd(nums[i], mx);
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        int start = 0, end = n - 1;
        long long sum = 0;
        while(start < end) {
            sum += gcd(prefixGcd[start], prefixGcd[end]);
            start ++; end--;
        }

        return sum;
    }
};