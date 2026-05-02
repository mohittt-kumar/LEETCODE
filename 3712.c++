class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int num=nums[i];
            mp[num]++;
        }
        for(auto it:mp){
            if(it.second%k==0){
                sum+=it.first*it.second;
            }   
        }
        return sum;
    }
};



class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int count=0;
            bool alreadycount=false;
            for(int p=0;p<i;p++){
                if(nums[p]==nums[i]){
                    alreadycount=true;
                    break;
                }
            }
            if(alreadycount)continue;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                  count++;
                }
           }
            if(count%k==0){
                sum=sum+nums[i]*count;
            }
        }
        return sum;
    }
};
