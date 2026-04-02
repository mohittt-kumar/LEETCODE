#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        int n = nums.size();

        int count1 = 0, count2 = 0;
        int candidate1 = -1, candidate2 = -1;

        for(int num : nums){

            if(candidate1 == num){
                count1++;
            }
            else if(candidate2 == num){
                count2++;
            }
            else if(count1 == 0){
                candidate1 = num;
                count1 = 1;
            }
            else if(count2 == 0){
                candidate2 = num;
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }

        count1 = 0;
        count2 = 0;

        for(int num : nums){
            if(num == candidate1) count1++;
            else if(num == candidate2) count2++;
        }

        vector<int> ans;

        if(count1 > n/3) ans.push_back(candidate1);
        if(count2 > n/3) ans.push_back(candidate2);

        return ans;
    }
};

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Solution s;

    vector<int> ans = s.majorityElementTwo(arr);

    for(int x : ans){
        cout<<x<<" ";
    }
}
