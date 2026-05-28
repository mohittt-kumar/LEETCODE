class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        // code here
        int n=pat.size();
        int m=txt.size();
        vector<int>lps(n,0);
        int pre=0,suf=1,first=0,second=0;
        while(suf<n){
            if(pat[pre]==pat[suf]){
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
        vector<int>ans;
        while(first<m){
            if(txt[first]==pat[second]){
                first++;
                second++;
            }
            
            if(second==n){
                ans.push_back(first-second);
                second=lps[second-1];
            }else if(first<m && pat[second]!=txt[first]){
                if(second==0){
                    first++;
                }else{
                    second=lps[second-1];
                }
            }
        }
            return ans;
    }
};
