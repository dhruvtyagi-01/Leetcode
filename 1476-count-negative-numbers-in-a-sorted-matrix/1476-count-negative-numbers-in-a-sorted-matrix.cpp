class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        
        for (auto& nums : grid) {
            for (int val : nums) {
                if (val < 0) {
                    count++;
                }
            }
        }

        return count;
    }
};