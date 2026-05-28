class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        vector<int>lps(s.size(),0);
        int pre=0,suf=1;
        while(suf<s.size()){
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
        }
        int len=lps[s.size()-1];
        if(len>0 && s.size()%(s.size()-len)==0){
            return true;
        }return false;
    }
};
