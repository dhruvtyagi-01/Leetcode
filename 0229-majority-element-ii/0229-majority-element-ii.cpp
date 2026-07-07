class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }

        for (auto p : m) {
            if (p.second > n / 3) {
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};