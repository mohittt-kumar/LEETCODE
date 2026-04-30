class Solution {
public:
    int maxDistance(vector<int>& pos, int m) {
        long long start=1;
        int n=pos.size();
        sort(pos.begin(),pos.end());
        long long end=pos[n-1]-pos[0];
        long long ans=0;
        while(start<=end){
            long long mid=start+(end-start)/2;
            int count=1,posi=pos[0];
            for(int i=1;i<n;i++){
                if(posi+mid<=pos[i]){
                    count++;
                    posi=pos[i];
                }
            }
            if(count<m){
                end=mid-1;
            }else{
                ans=mid;
                start=mid+1;
            }
        }return ans;

    }
};
