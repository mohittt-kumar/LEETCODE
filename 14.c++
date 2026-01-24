class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string s=strs[0], s1=strs[n-1];
        int m=min(s.size(),s1.size());
        for(int i=0;i<m;i++){
            if(s[i]==s1[i]){
                ans+=s[i];
            }else{
                return ans;
            }
        }
        return ans;
    }
};
