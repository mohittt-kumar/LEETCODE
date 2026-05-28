class Solution {
public:
    string longestPrefix(string s) {
        int n=s.size();
        vector<int>lps(n,0);
        int suf=1,pre=0;
        while(suf<n){
            if(s[pre]==s[suf]){
                lps[suf]=pre+1;
                suf++;
                pre++;
            }else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }else{
                    pre=lps[pre-1];
                }
            }
        }int len=lps[n-1];
        string ans;
        for(int i=0;i<len;i++){
            ans+=s[i];
        }
        return ans;
    }
};
