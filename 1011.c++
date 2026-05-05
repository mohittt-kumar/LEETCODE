class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int start=weights[0],end=0,ans=0;
        for(int i=0;i<n;i++){
            start=max(start,weights[i]);
            end+=weights[i];
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            int count=1,total_weight=0;
            for(int i=0;i<n;i++){
                total_weight+=weights[i];
                if(total_weight>mid){
                    count++;
                    total_weight=weights[i];
                }
            }
            if(count>days){
                start=mid+1;
            }else{
                ans=mid;
                end=mid-1;
            }
        }return ans;
    }
};
