class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        int len=0;
        while(i>=0){
            while(i>=0 && s[i]==' '){
                i--;
            }len=s.size()-i;
            while(i>=0 && s[i]!=' '){
                i--;
            }
            len=s.size()-i-len;
            break;
        }
        return len;
    }
};