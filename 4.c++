class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr(nums1.size()+nums2.size());
        for(int i=0;i<nums1.size();i++){
            arr[i]=nums1[i];
        }
        for(int i=0;i<nums2.size();i++){
            arr[nums1.size()+i]=nums2[i];
        }
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n%2==1){
            return arr[n/2];
        }else{
            return (arr[n/2-1]+arr[n/2])/2.0;
        }
    }
};
