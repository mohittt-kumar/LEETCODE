class Solution {
public:
    int longestKSubstr(string &s, int k) {
        vector<int> freq(256, 0);
        int left = 0;
        int distinct = 0;
        int ans = -1;
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 0)
                distinct++;
            freq[s[i]]++;
            while (distinct > k) {
                freq[s[left]]--;
                if (freq[s[left]] == 0)
                    distinct--;
                left++;
            }
            if (distinct == k) {
                ans = max(ans, i - left + 1);
            }
        }
        return ans;
    }
};
