class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        int i = 0, j = 0;
        int m = nums1.size(), n = nums2.size();

        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                temp.push_back(nums1[i]);
                i++;
            } else {
                temp.push_back(nums2[j]);
                j++;
            }
        }
        while (i < m) {
            temp.push_back(nums1[i]);
            i++;
        }
        while (j < n) {
            temp.push_back(nums2[j]);
            j++;
        }

        int sz = temp.size();
        if (sz % 2 == 1) {
            return temp[sz / 2];
        } else {
            return (temp[sz / 2 - 1] + temp[sz / 2]) / 2.0;
        }
    }
};