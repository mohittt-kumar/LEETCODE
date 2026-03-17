

#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n=nums.size();
        int sum=0;
        int left=0;
        int maxlength=0;
        for(int i=0;i<n;i++){
        	sum+=nums[i];
        	
        	while(sum>k){
        		sum-=nums[left];
        		left++;
			}
			if(sum==k){
				maxlength=max(maxlength,i-left+1);
			}
		}return maxlength;
    }
};
int main(){
	Solution s;
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int k;
	cin>>k;
	barray(arr,k);
	cout<<"The size of lonegst subarray whose sum is equal to target: "<<res;
}
