class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int left=1,right=m;
        if(m==0)return 0;
        while(left<=right){
            long long mid=left+(right-left)/2;
            
            long long nthmid=1;
            for(int i=0;i<n;i++){
                nthmid*=mid;
                if(nthmid>m)break;
            }
            
            if(nthmid==m){
                return mid;
            }else if(nthmid<m){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }return -1;
    }
};
