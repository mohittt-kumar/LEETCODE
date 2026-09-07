class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {
            bool already = false;

            // Check if already added
            for (int x : ans) {
                if (x == nums1[i]) {
                    already = true;
                    break;
                }
            }

            if (already)
                continue;

            // Check in nums2
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    ans.push_back(nums1[i]);
                    break;
                }
            }
        }

        return ans;
    }
};