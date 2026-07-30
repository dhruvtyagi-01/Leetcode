class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int val : nums) {
            if(freq[val] >= 1) {
                return true;
            }
            freq[val]++;
        }
        return false;
    }
};