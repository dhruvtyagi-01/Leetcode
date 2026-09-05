class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> mx(n, 0);
        vector<int> mn(n, 0);
        int maxval = INT_MIN, minval = INT_MAX;

        for (int i = 0; i < n; i++) {
            maxval = max(maxval, nums[i]);
            mx[i] = maxval;
        }

        for (int i = n - 1; i >= 0; i--) {
            minval = min(minval, nums[i]);
            mn[i] = minval;
        }

        for (int i = 0; i < n; i++) {
            if (mx[i] - mn[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};