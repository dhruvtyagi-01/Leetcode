class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }

        for(auto p : m) {
            if(p.second == 1) {
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};