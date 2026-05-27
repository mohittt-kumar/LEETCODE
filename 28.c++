class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        if(n==1){
            return 0;
        }
        int m=needle.size();
        for(int i=0;i<=n-m;i++){
            if(haystack.substr(i,m)==needle){
                return i;
            }
        }
        return -1;
    }
};



class Solution {
public:

    vector<int> buildLPS(string pat) {

        int n = pat.size();
        vector<int> lps(n, 0);

        int len = 0;
        int i = 1;

        while(i < n) {

            if(pat[i] == pat[len]) {
                len++;
                lps[i] = len;
                i++;
            }
            else {

                if(len != 0) {
                    len = lps[len - 1];
                }
                else {
                    lps[i] = 0;
                    i++;
                }
            }
        }

        return lps;
    }

    int strStr(string haystack, string needle) {

        vector<int> lps = buildLPS(needle);

        int i = 0;
        int j = 0;

        while(i < haystack.size()) {

            if(haystack[i] == needle[j]) {
                i++;
                j++;
            }

            if(j == needle.size()) {
                return i - j;
            }

            else if(i < haystack.size() &&
                    haystack[i] != needle[j]) {

                if(j != 0)
                    j = lps[j - 1];
                else
                    i++;
            }
        }

        return -1;
    }
};
