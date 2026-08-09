class Solution {
public:
    string toGoatLatin(string s) {
        string ans=" ";
        int i=0;
        int count=0;
        while(i<s.size()){
            string word="";
            while(i<s.size() && s[i]!=' '){
                word+=s[i];
                i++;
            }count++;
            if(word[0]=='a' || word[0]=='e' || word[0]=='i' || word[0]=='o' || word[0]=='u' || word[0]=='A' || word[0]=='E' || word[0]=='I' ||word[0]=='O' || word[0]=='U'){
                ans+=" "+word+"ma";
            }else{
                char ch=word[0];
                word+=ch;
                ans+=" "+word.substr(1)+"ma";
            }
            for(int j=0;j<count;j++)
                ans+='a';
            i++;
        }
        return ans.substr(2);
    }
};