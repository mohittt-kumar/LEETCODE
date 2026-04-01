class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<long long,int> mp;

        long long prefixSum = 0;
        long long total = 0;

        mp[0] = 1;

        for(int i = 0; i < n; i++){
            prefixSum += nums[i];

            if(mp.count(prefixSum - k)){
                total += mp[prefixSum - k];
            }

            mp[prefixSum]++;
        }

        return total;
    }
};
