class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> left(n);
        vector<int> right(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            left[i] = sum;
            sum += nums[i];
        }

        sum = 0;
        for (int j = n - 1; j >= 0; j--) {
            right[j] = sum;
            sum += nums[j];
        }

        for(int k = 0; k < n; k++) {
            ans[k] = abs(left[k] - right[k]);
        }

        return ans;
    }
};