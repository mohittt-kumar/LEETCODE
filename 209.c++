class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,ans=INT_MAX;
        int first=0,second=0;

        while(second<nums.size()){
            sum+=nums[second];
            while(sum>=target){
                ans=min(ans,second-first+1);
                sum=sum-nums[first];
                first++;
            }second++;
        }return ans==INT_MAX ? 0:ans;
    }
};
