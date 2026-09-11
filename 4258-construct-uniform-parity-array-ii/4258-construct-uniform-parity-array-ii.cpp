class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = nums1[0];

        for (int num : nums1) {
            mn = min(mn, num);
        }

        if (mn % 2 != 0) {
            return true;
        }

        for (int num : nums1) {
            if (num % 2 != 0) {
                return false;
            }
        }

        return true;
    }
};