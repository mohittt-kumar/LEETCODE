class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0;
        int currend=0;
        int forward=0;
        for(int i=0;i<nums.size()-1;i++){
            forward=max(forward,i+nums[i]);

            if(i==currend){
                jump++;
                currend=forward;
            }
        }return jump;
    }
};
