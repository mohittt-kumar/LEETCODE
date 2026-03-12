//
///////BUBBLE SORT/////////
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    vector<int> BubbleSort(vector<int>& nums) {
//		int n=nums.size();
//		for(int i=0;i<n;i++){
//			for(int j=0;j<n-i-1;j++){
//				if(nums[j]>nums[j+1]){
//					swap(nums[j],nums[j+1]);
//				}
//			}
//		}return nums;
//    }
//};
//int main(){
//	Solution s;
//	int n;
//	cin>>n;
//	vector<int> arr(n);
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	s.BubbleSort(arr);	
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//
//}


/////////////Selection Sort//////////
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    vector<int> SelectionSort(vector<int>& nums) {
//		int n=nums.size();
//		for(int i=0;i<n-1;i++){
//			int smallest=i;
//			for(int j=i+1;j<n;j++){
//				if(nums[j]<nums[smallest]){
//					smallest=j;
//				}
//			}swap(nums[i],nums[smallest]);
//		}return nums;
//    }
//};
//int main(){
//	Solution s;
//	int n;
//	cin>>n;
//	vector<int> arr(n);
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	s.SelectionSort(arr);	
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//
//}








//////////Insertion Sort//////////
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    vector<int> InsertionSort(vector<int>& nums) {
//		int n=nums.size();
//		for(int i=1;i<n;i++){
//			int curr=nums[i];
//			int prev=i-1;
//			while(prev>=0 && nums[prev]>curr){
//				nums[prev+1]=nums[prev];
//				prev--;
//			}nums[prev+1]=curr;
//		}return nums;
//    }
//};
//int main(){
//	Solution s;
//	int n;
//	cin>>n;
//	vector<int> arr(n);
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	s.InsertionSort(arr);	
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//
//}


////////////Insertion Sort/////////
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> InsertionSort(vector<int>& nums) {
		int n=nums.size();
		for(int i=1;i<n;i++){
			for(int j=i;j>0;j--){
				if(nums[j]<nums[j-1]){
					swap(nums[j],nums[j-1]);
				}else{
					break;
				}
			}
		}return nums;
    }
};
int main(){
	Solution s;
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	s.InsertionSort(arr);	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

}

