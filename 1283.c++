class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int start=0, end=0,ans=0;
        for(int i=0;i<n;i++){
            start=min(start,nums[i]);
            end=max(end,nums[i]);
        }
        if(start==0)start=1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int count=0;
            for(int i=0;i<n;i++){
                count+=nums[i]/mid;
                if(nums[i]%mid)count++;
            }
            if(count<=threshold){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }return ans;
    }
};
