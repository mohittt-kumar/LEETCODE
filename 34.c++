
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int firstpos(vector<int>&nums,int target){
		 int left=0,right=nums.size()-1,ans=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                ans=mid;
                right=mid-1;
            }else if(nums[mid]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }return ans;
	}
	int lastpos(vector<int>&nums,int target){
		 int left=0,right=nums.size()-1,ans=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                ans=mid;
                left=mid+1;
            }else if(nums[mid]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }return ans;
	}
    vector<int> searchRange(vector<int>& nums, int target) {
       return{firstpos(nums,target),lastpos(nums,target)};
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
	vector<int>res=s.searchRange(arr,target);
	
	cout<<"the fisrt and last occurance of target:";
		cout<<res[0]<<" "<<res[1];
}
