class Solution {
public:
    int kmp_search(string s1, string s2){
        vector<int>lps(s2.size(),0);
        int pre=0,suf=1;
        while(suf<s2.size()){
            if(s2[pre]==s2[suf]){
                lps[suf]=pre+1;
                suf++,pre++;
            }else{
                if(pre==0)suf++;
                else pre=lps[pre-1];
            }
        }
        int second=0, first=0;
        while(second<s2.size()&& first<s1.size()){
            if(s1[first]==s2[second]){
                first++,second++;
            }
            else{
                if(second==0)first++;
                else second=lps[second-1];
            }
        }if(second==s2.size()){
            return 1;
        }return -1;
    }
    int repeatedStringMatch(string a, string b) {
        if(a==b){
            return 1;
        }
        int repeat=1;
        string temp=a;
        while(temp.size()<b.size()){
            temp+=a;
            repeat++;
        }
        // KMP pattern search 
        if(kmp_search(temp,b)==1){
            return repeat;
        }
        // temp+a , KMP search
        if(kmp_search(temp+a,b)==1){
            return repeat+1;
        }
        return -1;
    }
};
