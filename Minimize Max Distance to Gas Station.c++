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









//
//
//
//
//#include<bits/stdc++.h>
//using namespace std;
//class Solution{
//	public:
//		double minMaxdist(vector<int>&arr,int k){
//			int n=arr.size();
//			long double left=0,right=0,mid;
//			for(int i=1;i<n;i++){
//				right=max(right,(long double)(arr[i]-arr[i-1]));
//			}
//			long double diff=1e-6;
//			while(right-left>diff){
//				mid=left+(right-left)/2.0;
//				int count=0;
//				for(int i=1;i<n;i++){
//					long double gap=(long double)(arr[i]-arr[i-1]);
//					count+=(int)(gap/mid);
//					if(fmod(gap,mid)==0)count--;
//				}
//				if(count>k){
//					left=mid;
//				}else{
//					right=mid;
//				}
//			}return right;
//		}
//};
//int main(){
//	int n;
//	cin>>n;
//	vector<int>arr(n);
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	Solution s;
//	int k;
//	cin>>k;
//	cout<<"Minimize Max Distance to Gas Station is: "<<s.minMaxdist(arr,k);
//}
