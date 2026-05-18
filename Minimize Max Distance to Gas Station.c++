class Solution {
  public:
    double minMaxDist(vector<int> &stations, int K) {
        int n=stations.size();
        long double left=0,right=0;
        for(int i=1; i<n;i++){
            right=max(right,(long double)(stations[i]-stations[i-1]));
        }
        long double diff=1e-6;
        while(right-left>diff){
            long double mid =left+(right-left)/2.0;
            
            int count=0;
            for(int i=1;i<n;i++){
                long double gap=stations[i]-stations[i-1];
                count+=(int)(gap/mid);
                if(fmod(gap,mid)==0)count--;
                
            }
            if(count>K){
                left=mid;
            }else{
                right=mid;
            }
        }return right;
    }
};
