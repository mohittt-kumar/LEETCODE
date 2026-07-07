class Solution {
public:
    string frequencySort(string s) {
        vector<int>ans(256,0); 
        for(int i=0;i<s.size();i++){
            ans[s[i]]++;
        }   
        string res="";
        while(true){
            char ch;
            int mx=0;
            for(int i=0;i<256;i++){
                if(ans[i]>mx){
                    mx=ans[i];
                    ch=i;
                }
            }if(mx==0){
                break;
            }
            while(mx--){
               res+=ch;
            }
            ans[ch]=0;
        }
        return res;
    }
};