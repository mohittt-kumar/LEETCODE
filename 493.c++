
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	int merge(vector<int>& arr,int st, int mid, int end){
		int i=st;
		int j=mid+1,s=mid+1;
		int paircount=0;
		vector<int>temp;
		for(int k=st;k<=mid;k++){
			while(s<=end && (long long)arr[k]>2LL * arr[s]){
				s++;
			}
			paircount+=(s-(mid+1));
		}
		
		while(i<=mid && j<=end){
			if(arr[i]<=arr[j]){
				temp.push_back(arr[i]);
				i++;
			}else{
				temp.push_back(arr[j]);
				j++;
			}
		}
		while(i<=mid)temp.push_back(arr[i++]);
		while(j<=end)temp.push_back(arr[j++]);
		
		for(int k=0;k<temp.size();k++){
			arr[k+st]=temp[k];
		}
		
		return paircount;
	}
	int mergesort(vector<int>& arr, int st, int end){
		if(st<end){
			int mid=st+(end-st)/2;
			int left=mergesort(arr,st,mid);
			int right=mergesort(arr,mid+1,end);
			int count=merge(arr,st,mid,end);
			
			return count+left+right;
		}
		return 0;
	}
	int reversecount(vector<int>&arr){
		int n=arr.size();
		int st=0, end=n-1;
		int revcount=mergesort(arr,st,end);
		
		return revcount;
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
	cout<<"Reverse pair count(i<j  && arr[i]>2*arr[j]) is: "<<s.reversecount(arr);
}
