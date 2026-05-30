class Solution {
  public:
    int minChar(string &s) {
        int n=s.size();
        string rev = s;
        reverse(rev.begin(), rev.end());
        s+='$';
        s += rev;
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
        }return n-lps[s.size()-1];

    }
};
