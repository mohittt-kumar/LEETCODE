class Solution {
public:
    int balancedStringSplit(string s) {
        int i=0,ans=0;
        int countR=0, countL=0;
        while(i<s.size()){
            if(s[i]=='R'){
                countR++;
            }else{
                countL++;
            }

            if(countR==countL){
                ans++;
                countR=0;
                countL=0;
            }
            i++;
        }return ans;
    }
};