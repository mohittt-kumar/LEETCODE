class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int total = 0;
        unordered_map<int,int> freq;
        int start = 0, end = 0, n = nums.size(), count = 0;

        // At most k distinct
        while(end < n) {
            freq[nums[end]]++;
            if(freq[nums[end]] == 1)
                count++;

            while(count > k) {
                freq[nums[start]]--;
                if(freq[nums[start]] == 0)
                    count--;
                start++;
            }

            total += end - start + 1;
            end++;
        }

        int atMostK = total;

        // At most k-1 distinct
        total = 0;
        freq.clear();
        start = end = count = 0;

        while(end < n) {
            freq[nums[end]]++;
            if(freq[nums[end]] == 1)
                count++;

            while(count > k - 1) {
                freq[nums[start]]--;
                if(freq[nums[start]] == 0)
                    count--;
                start++;
            }

            total += end - start + 1;
            end++;
        }

        return atMostK - total;
    }
};
