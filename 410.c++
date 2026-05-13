class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int start=0, end=0,ans=end;
        for(int i=0;i<n;i++){
            start=max(start,nums[i]);
            end+=nums[i];
        }
        while(start<=end){
            int mid=start+(end-start)/2;

            int count=1,total_sum=0;
            for(int i=0;i<n;i++){
                total_sum+=nums[i];
                if(total_sum>mid){
                    count++;
                    total_sum=nums[i];
                }
            }
            if(count<=k){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }return ans;
    }
};
