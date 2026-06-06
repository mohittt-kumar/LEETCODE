class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftsum(n),rightsum(n),ans(n);
        
        int sum=0;
        for(int i=0;i<n;i++){
            leftsum[i]=sum;
            sum+=nums[i];
        }
        sum=0;
        for(int i=n-1;i>=0;i--){
            rightsum[i]=sum;
            sum+=nums[i];
        }

        for(int i=0;i<n;i++){
            ans[i]=abs(rightsum[i]-leftsum[i]);
        }
        return ans;
    }
};




class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total = 0;
        for(int x : nums) total += x;

        int left = 0;
        vector<int> ans(nums.size());

        for(int i = 0; i < nums.size(); i++) {
            int right = total - left - nums[i];
            ans[i] = abs(left - right);
            left += nums[i];
        }

        return ans;
    }
};
