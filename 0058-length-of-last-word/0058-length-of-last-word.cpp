class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        string word="";
        int i=0;
        while(i<s.size() && s[i]==' '){
            i++;
        }
        while(i<s.size()&&s[i]!=' '){
            word+=s[i];
            i++;
        }
        return word.size();
    }
};