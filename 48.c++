
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int> >& matrix) {
        int n=matrix.size();
        vector<vector<int> > ans(n, vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[j][n-i-1]=matrix[i][j];
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=ans[i][j];
            }
        }

    }
};
int main(){
	Solution s;
	int n;
	cin>>n;
	vector<vector<int>> arr(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	cout<<endl;
	s.rotate(arr);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
}
