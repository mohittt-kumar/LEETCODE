class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int totalsum=0;
        for(int i=0;i<n;i++){
            int left=i+1;
            int right=n-i;
            int totalsubarray=left*right;

            int oddsubarray=(totalsubarray+1)/2;
            totalsum+=arr[i]*oddsubarray;
        }
        return totalsum;
    }
};
