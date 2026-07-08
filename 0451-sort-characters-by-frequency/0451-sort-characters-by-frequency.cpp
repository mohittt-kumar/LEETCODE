class Solution {
public:
    string frequencySort(string s) {
        vector<int>ans(256,0);
        for(int i=0;i<s.size();i++){
            ans[s[i]]++;
        }
        string s1="";
        while(true){
            int mx=0;
            char ch;
            for(int i=0;i<256;i++){
                if(mx<ans[i]){
                    mx=ans[i];
                    ch=i;
                }
            }
            if(mx==0)break;
            while(mx--){
                s1+=ch;
            }ans[ch]=0;
        }return s1;
    }
};