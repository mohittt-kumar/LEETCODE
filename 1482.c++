class Solution {
public:
    int minDays(vector<int>& bloom, int m, int k) {
        int n=bloom.size();
        if((long long)m*k>n)return -1;
        int start=0,end=0,ans=0;
        for(int i=0;i<n;i++){
            start=min(start,bloom[i]);
            end=max(end,bloom[i]);
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            int count=0,bouq=0;
            for(int i=0;i<n;i++){
                if(bloom[i]<=mid)count++;
                else{
                    bouq+=count/k;
                    count=0;
                }
            }bouq+=count/k;
            if(bouq>=m){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }return ans;
    }
};
