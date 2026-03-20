
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int mid=0;
        int high=n-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};




class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int count0=0,count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count0++;
            }else if(nums[i]==1){
                count1++;
            }else{
                count2++;
            }
        }
        int k=0;
        for(int i=0;i<count0;i++){
            nums[k]=0;
            k++;
        }
        for(int i=0;i<count1;i++){
            nums[k]=1;
            k++;
        }
        for(int i=0;i<count2;i++){
            nums[k]=2;
            k++;
        }
    }
};
