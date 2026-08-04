class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> s;
        int mn = INT_MAX, mx= INT_MIN;

        for (int val : nums) {
            s.insert(val);
            mn = min(mn, val);
            mx = max(mx, val);
        }

        for (int i = mn + 1; i < mx; i++) {
            if (s.find(i) == s.end()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};