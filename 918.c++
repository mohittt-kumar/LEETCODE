class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int currmax=0,maxsum=INT_MIN;
        int currmin=0,minsum=INT_MAX;
        int total=0;
        for(int num:nums){
            total+=num;
            currmax=max(num,currmax+num);
            maxsum=max(maxsum,currmax);

            currmin=min(num,currmin+num);
            minsum=min(minsum,currmin);
        }
         if (maxsum < 0)
            return maxsum;

        return max(maxsum, total - minsum);
    }
};
