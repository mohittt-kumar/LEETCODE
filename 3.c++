class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        vector<bool>ans(256,0);
        int first=0 , second=0;
        while(second<s.size()){
            while(ans[s[second]]){
                ans[s[first]]=0;
                first++;
            }
            ans[s[second]]=1;
            len=max(len,second-first+1);
            second++;
        }return len;
    }
};
