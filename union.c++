
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    	int n=nums1.size();
    	int m=nums2.size();
        vector<int>ans;
        int i=0,j=0;
        while(i<n && j<m){
        	if(nums1[i]<nums2[j]){
        		if(ans.empty()||ans.back()!=nums1[i]){
        			ans.push_back(nums1[i]);
				}i++;
			}else if(nums1[i]>nums2[j]){
				if(ans.empty()||ans.back()!=nums2[j]){
					ans.push_back(nums2[j]);
				}j++;
			}else{
                if(ans.empty() || ans.back()!=nums1[i]){
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
		}
		
        while(i<n){
            if(ans.back()!=nums1[i]){
                ans.push_back(nums1[i]);
            }
            i++;
        }

        while(j<m){
            if(ans.back()!=nums2[j]){
                ans.push_back(nums2[j]);
            }
            j++;
        }

        return ans;
    }
};
int main(){
	Solution s;
	int n,m;
	cin>>n>>m;
	vector<int>arr1(n),arr2(m);
	for(int i=0;i<n;i++){
    	cin>>arr1[i];
	}

	for(int i=0;i<m;i++){
	    cin>>arr2[i];
	}
	vector<int>ans=s.unionArray(arr1,arr2);
	for(int i=0;i<ans.size();i++ ){
		cout<<ans[i]<<" ";
	}
}
