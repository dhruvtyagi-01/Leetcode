class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> m;

        for(int val : nums1) {
            m[val]++;
        }

        for(int val : nums2) {
            if(m[val] > 0) {
                ans.push_back(val);
                m[val]--;
            }
        }

        return ans;
    }
};