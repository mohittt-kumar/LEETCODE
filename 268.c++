////GeeksforGeeks////
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long long n=arr.size()+1;
        long long totalsum=n*(n+1)/2;
        long long currsum=0;
        for(int i=0;i<n-1;i++){
            currsum+=arr[i];
        }return totalsum-currsum;
        
    }
};



//leetcode//
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int totalsum=n*(n+1)/2;
        int currsum=0;
        for(int i=0;i<n;i++){
            currsum+=nums[i];
        }return totalsum-currsum;
    }
};
