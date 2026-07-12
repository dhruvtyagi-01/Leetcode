class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());

        unordered_map<int, int> rank;
        int currRank = 1;

        for (int val : temp) {
            if (rank.find(val) == rank.end()) {
                rank[val] = currRank;
                currRank++;
            }
        }

        vector<int> ans;
        for(int val : arr) {
            ans.push_back(rank[val]);
        }

        return ans;
    }
};