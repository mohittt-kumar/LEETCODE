class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int k=0,ans=0;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                k=i;
                break;
            }
        }
        int left=0;
        int right=n-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[(mid+k)%n]==target){
                return (mid+k)%n;
            }else if(nums[(mid+k)%n]>target){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }return -1;
    }
};




//Time complexity is O(n)
// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             if (nums[i] == target) {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };
