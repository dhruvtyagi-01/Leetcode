class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int freq[101] = {};

        for(int val : nums) {
            freq[val]++;
        }

        for(int val : nums) {
            if(val % 2 == 0 && freq[val] == 1) {
                return val;
            }
        }

        return -1;
    }
};