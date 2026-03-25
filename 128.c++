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
