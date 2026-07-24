class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        string ans="";
        while(i<s.size()){
            string word="";
            while(i<s.size() && s[i]!=' '){
                word+=s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.size()>0){
                ans+=" "+word;
            }
            i++;
        }return ans.substr(1);
    }
};