class Solution {
  public:
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int start=1;
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int end=stalls[n-1]-stalls[0];
        int ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            int count=1,pos=stalls[0];
            for(int i=0;i<n;i++){
                if(pos+mid<=stalls[i]){
                    count++;
                    pos=stalls[i];
                }
            }
            if(count<k){
                end=mid-1;
            }else{
                start=mid+1;
                ans=mid;
            }
        }return ans;
    }
};
