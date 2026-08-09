class Solution {
public:
    string truncateSentence(string s, int k) {
        int i=0,count=0;
        string ans;
        while(i<s.size()){
            while(i<s.size() && s[i]!=' '){
                ans+=s[i];
                i++;
            }
            count++;
            if(count==k){
                break;
            }

            ans+=' ';
            i++;
        }return ans;
    }
};