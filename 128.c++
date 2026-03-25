class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int longest=0;
        for(int num:s){
            if(s.find(num-1)==s.end()){
                int current=num;
                int count=1;
                while(s.find(current+1)!=s.end()){
                    current++;
                    count++;
                }longest=max(count,longest);
            }
        }return longest;
    }
};





class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;

        sort(nums.begin(), nums.end());

        int longest = 1;
        int count = 1;

        for(int i=1;i<n;i++){

            if(nums[i] == nums[i-1]){
                continue;
            }

            if(nums[i] == nums[i-1] + 1){
                count++;
            }
            else{
                longest = max(longest, count);
                count = 1;
            }
        }

        return max(longest, count);
    }
};
