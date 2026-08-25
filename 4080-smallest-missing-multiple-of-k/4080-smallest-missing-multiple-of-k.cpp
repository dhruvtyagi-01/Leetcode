class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s;

        for(int val : nums) {
            s.insert(val);
        }

        int multiple = k;

        while(true) {
            if(s.find(multiple) == s.end()) {
                return multiple;
            }
            multiple += k;
        }
    }
};