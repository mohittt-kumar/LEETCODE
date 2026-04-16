
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	long long int merge(vector<int>&arr,int st,int mid,int end){
		vector<int>temp;
		long long int inversioncount=0;
		int i=st;
		int j=mid+1;
		while(i<=mid && j<=end){
			if(arr[i]<=arr[j]){
				temp.push_back(arr[i]);
				i++;
			}else{
				temp.push_back(arr[j]);
				j++;
				inversioncount+=(mid-i+1);
			}
		}
		
		while(i<=mid){
			temp.push_back(arr[i]);
			i++;
		}
		while(j<=end){
			temp.push_back(arr[j]);
			j++;
		}
		for(int i=st; i<=end; i++){
    		arr[i] = temp[i-st];
	}
		return inversioncount;
		
	}
	long long int mergesort(vector<int>&arr, int st,int end){
		if(st<end){
			int mid=st+(end-st)/2;
			long long int leftinversioncount=mergesort(arr,st,mid);
			long long int rightinversioncount=mergesort(arr,mid+1,end);
			
			long long int inversioncount=merge(arr,st,mid,end);
			
			return inversioncount+leftinversioncount+rightinversioncount;
		}
		return 0;
		
	}
	long long int inversioncount(vector<int>& arr){
		int n=arr.size();
		int start=0;
		int end=n-1;
		long long int inversion=mergesort(arr,start,end);
		return inversion;
		
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
	cout<<"Inversion Count(i<j  && arr[i]>arr[j]) is: "<<s.inversioncount(arr);
}
