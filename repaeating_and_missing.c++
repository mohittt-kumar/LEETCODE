
/////Find the repeating and missing number////
//#include<bits/stdc++.h>
//using namespace std;
//class Solution {
//public:
//    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
//        int n=nums.size();
//        sort(nums.begin(),nums.end());
//        int A,B;
//        for(int i=0;i<n-1;i++){
//            if(nums[i]==nums[i+1]){
//                A=nums[i];
//                break;
//            }
//        }
//        int sum=0;
//        int totalsum=n*(n+1)/2;
//        for(int i=0;i<n;i++){
//            sum+=nums[i];
//        }
//        B=totalsum-(sum-A);
//
//        return {A,B};
//    }
//};
//int main(){
//	int n;
//	cin>>n;
//	vector<int>arr(n);
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	Solution s;
//	vector<int>res=s.findMissingRepeatingNumbers(arr);
//	for(int i=0;i<res.size();i++){
//		cout<<res[i]<<" ";
//	}
//}




/////Find the repeating and missing number////OPTIMAL SOLUTION///////
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        long long n=nums.size();
        long long A,B;
        long long totalsquaresum=n*(n+1)*(2*n+1)/6;
        long long sum=0 ,sq_sum=0;
        int totalsum=n*(n+1)/2;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            sq_sum+=(long long)(nums[i]*nums[i]);
        }
        long long val2=sq_sum-totalsquaresum;
        long long val1=sum-totalsum;
        
        val2=val2/val1;
        A= (val1+val2)/2;
		B=A-val1;
        

        return {(int)A,(int)B};
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
	vector<int>res=s.findMissingRepeatingNumbers(arr);
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
}

