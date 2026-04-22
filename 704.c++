class Solution {
public:
    int binarysearc(vector<int> &arr ,int left,int right,int target){
        if(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]==target){
                return mid;
            }else if(arr[mid]<target){
                return binarysearc(arr,mid+1,right,target);
            }else{
                return binarysearc(arr,left,mid-1,target);
            }
        }return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        return binarysearc(nums,left,right,target);
       
    }
};
