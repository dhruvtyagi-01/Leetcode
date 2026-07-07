class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }

        for(auto p : m) {
            if(p.second == 1) {
                return p.first;
            }
        }

        return -1;
    }
};