class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int odd=0;
        int even=1;
        vector<int>res(n);
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                res[odd]=nums[i];
                odd+=2;
            }else{
                res[even]=nums[i];
                even+=2;
            }
        }return res;
    }
};
