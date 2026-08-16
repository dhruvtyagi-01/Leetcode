class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {
            int value = abs(nums[i]);
            int index = value - 1;

            if(nums[index] > 0) {
                nums[index] *= -1;
            } else {
                ans.push_back(value);
            }
        }

        return ans;
    }
};