
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
    	int floor=-1,ceil=-1;
        int n=nums.size();
        int left=0,right=n-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]<=x){
            	floor=nums[mid];
                left=mid+1;
            }else{
            	right=mid-1;
            }
        }
        left=0,right=n-1;
        while(left<=right){
           int mid=left+(right-left)/2;
          if(nums[mid]>=x){
            	ceil=nums[mid];
                right=mid-1;
            }else{
            	left=mid+1;
            }
        }
		return {floor,ceil};
    }
};
int main(){
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	Solution s;
	int target;
	cin>>target;
	vector<int>res=s.getFloorAndCeil(arr,target);
	
	cout<<"The find floor and ceil is :";
		cout<<res[0]<<" "<<res[1];
}
