class Solution {
public:
    int mx(vector<int>& nums, int m) {
        int maxval = INT_MIN;
        for (int j = 0; j <= m; j++) {
            maxval = max(maxval, nums[j]);
        }
        return maxval;
    }

    int mn(vector<int>& nums, int n) {
        int minval = INT_MAX;
        for (int j = n; j < nums.size(); j++) {
            minval = min(minval, nums[j]);
        }
        return minval;
    }

    int firstStableIndex(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            int high = mx(nums, i);
            int low = mn(nums, i);
            int inst = high - low;

            if (inst <= k) {
                return i;
            }
        }

        return -1;
    }
};