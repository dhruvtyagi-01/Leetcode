class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> mn(n);
        int minval = INT_MAX;

        for (int i = n - 1; i >= 0; i--) {
            minval = min(minval, nums[i]);
            mn[i] = minval;
        }

        int maxval = INT_MIN;

        for (int i = 0; i < n; i++) {
            maxval = max(maxval, nums[i]);

            if (maxval - mn[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};