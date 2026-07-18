class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = nums[0];
        int mx = nums[0];
        for(int val : nums) {
            mn = min(mn, val);
            mx = max(mx, val);
        }

        while (mx != 0) {
            int temp = mx;
            mx = mn % mx;
            mn = temp;
        }

        return mn;
    }
};