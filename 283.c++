class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        if(nums[left]==0){
            swap(nums[left],nums[right]);
            left++;
        }else{
            right--;
        }
    }
};




class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[k]=nums[i];
                k++;
            }
        }
        for(int i=k;i<n;i++){
            nums[i]=0;
        }
    }
};
