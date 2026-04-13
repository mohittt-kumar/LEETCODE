class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int prefixor=0;
        unordered_map<int,int> freq;
        freq[0]=1;
        int count=0;
        for(int num : nums){
            prefixor=prefixor^num;
            int target=prefixor^k;

            if(freq.find(target)!=freq.end()){
                count+=freq[target];
            }
            freq[prefixor]++;
        } return count;
    }
};
