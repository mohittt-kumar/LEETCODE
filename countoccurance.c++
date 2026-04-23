class Solution {
  public:
     int firstpos(vector<int>&nums,int x){
        int left=0,right=nums.size(),ans=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==x){
                ans=mid;
                right=mid-1;
            }else if(nums[mid]<x){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }return ans;
    }
    int lastpos(vector<int>&nums,int x){
        int left=0,right=nums.size(),ans=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==x){
                ans=mid;
                left=mid+1;
            }else if(nums[mid]<x){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }return ans;
    }

    int countFreq(vector<int>& arr, int target) {
    int first = firstpos(arr, target);

    if(first == -1)   // target not present
        return 0;

    int last = lastpos(arr, target);

    return last - first + 1;

    }
};
